/*
 * Random access file example.
 */
#include <stdio.h>

/* this structure holds the data for one client */
typedef struct client_struct {
    int acc_num;
    char last_name[15];
    char first_name[10];
    double balance;
} Client;

/* function protoypes */
void read_client_data(const char *);
void write_client_data(const char *);

int main() {

	const char *filename = "data.bin";
	
	/* create some data */
	write_client_data(filename);
	
	/* read it back and display it */
	read_client_data(filename);
	
}

/* read client data from a random access file */
void read_client_data(const char *filename) {
	
	FILE *f;
	Client client;

	/* open the data file */
	f = fopen(filename, "rb");
	if (f == NULL) {
		printf("Could not open %s.\n", filename);
		return;
	}
	
	/* print title */
	printf("%-6s%-16s%-11s%10s\n", "Acct", "Last Name", "First Name", "Balance");
	
	/* read one record at a time until we reach EOF */
	fread(&client, sizeof(Client), 1, f);
	while (!feof(f)) {
		if (client.acc_num != 0)
			printf("%-6d%-16s%-11s%10.2lf\n", client.acc_num, client.last_name, client.first_name, client.balance);
		fread(&client, sizeof(Client), 1, f);
	}
	
	fclose(f);
}
	

/* write client data to a random access file */	
void write_client_data(const char *filename) {
	
	FILE *f;
	Client client;

	/* open the data file */
	f = fopen(filename, "wb+");
	if (f == NULL) {
		printf("Could not open %s.\n", filename);
		return;
	}

	/* read account data from the user */
	printf("Enter account number (1-100, 0 to end)\n? ");
	scanf("%d", &client.acc_num);
	while (client.acc_num != 0) {
	
		/* read the data for this record */
		printf("Enter last name, first name and balance\n? ");
		scanf("%14s%9s%lf", client.last_name, client.first_name, &client.balance);
		
		/* go to this record's position in the file */
		fseek(f, (client.acc_num - 1) * sizeof(Client), SEEK_SET);
		
		/* write the client data structure */
		fwrite(&client, sizeof(Client), 1, f);
		
		/* ask for another record */
		printf("Enter account number (1-100, 0 to end)\n? ");
		scanf("%d", &client.acc_num);
	}
	
	/* clean up */
	fclose(f);
	
}
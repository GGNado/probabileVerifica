//RICERCA STRINGA SINGOLA NEL FILE
int cercaNelFile(char* nomeFile, char* a){
    
    FILE* fl = NULL;
    char b[10];
    fl = fopen(nomeFile, "r");
    
    if(fl == NULL) return -1;
   
    while(!feof(fl)){
        fscanf(fl, "%s", b);
        if(!strcmp(b,a)){
            fclose(fl);
            return 1;
        }
    }
    fclose(fl);
    return -1;   
}

//RICERCA SINGOLA CARATTERE

int cercaNelFile(char* nomeFile, char a){
   FILE* fl = NULL;
   char x;
   
   fl = fopen(nomeFile, "r");
   if(fl == NULL) return -1;
   
   while(!feof(fl)){
       x = fgetc(fl);
       if(x == a){
           fclose(fl);
           return 1;
       }
   }
   
   fclose(fl);
   return -1;
}

//CONTA PAROLA 
int contaParole(char* nomeFile){
   FILE* fl = NULL;
   int x = 0;
   char p[30];
   
   fl = fopen(nomeFile, "r");
   
   if(fl == NULL) return -1;
   
   while(fscanf(fl, "%s", p) != EOF){
       x++;
   }
  
   fclose(fl);
   return x;
}

//CONTA DELLA LETTERA z
int contaParole(char* nomeFile){
   FILE* fl = NULL;
   int x = 0;
   char p;
   
   fl = fopen(nomeFile, "r");
   
   if(fl == NULL) return -1;
   
   do{
      p = fgetc(fl);
      if(p == 'z'){
          x++;
      }  
   }while(p != EOF);
  
   fclose(fl);
   return x;
}

void copiaFile(char* nomeFile, char* nomeFileCopia){
	FILE* file = NULL;
	FILE* fileCopia =  NULL;
	char buf[30];

	file = fopen(nomeFile, "r");
	fileCopia = fopen(nomeFileCopia, "w");


	while(!feof(file)) {
		fgets(buf, sizeof(buf), file);
		fputs(buf, fileCopia);   
	}

	fclose(file);
	fclose(fileCopia);
}

void creaFile(char* nomeFile){
	FILE* fl = NULL;
	fl = fopen(nomeFile, "w");

	fclose(fl);}

void scriviFile(char* nomeFile){
	FILE* fl = NULL;
	char buf[30];

	fl = fopen(nomeFile, "w");
	while(fgets(buf, sizeof(buf), stdin) != NULL){
		fputs(buf, fl);
	}
	fclose(fl);
}	

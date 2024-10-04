#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


void main() {
	FILE* *fp;
	int i, k;
	char array[] = "aa.txt";
	char a[] = "a";

	/*printf("%s", array);*/

	/*printf("%c", array[1]);*/

	for (i = 0; i < 6; i++)
	{
		array[0] = a[0] + i;
		array[1] = a[0] + i;
		printf("%s", array);
		fp = fopen(array, "w");
		for (k = 1; k < 11; k++)
		{
			fprintf(fp, "Record N %d in file %s \n", k, array);
		}
		fclose(fp);
	}

	//aap = fopen("aa.txt", "w");
	//bbp = fopen("bb.txt", "w");
	//ccp = fopen("cc.txt", "w");
	//ddp = fopen("dd.txt", "w");
	//eep = fopen("ee.txt", "w");
	//ffp = fopen("ff.txt", "w");

	/*for (i = 1; i < 11; i++) 
	{
		fprintf(aap, "Record N %d in file aa.txt \n", i);
		fprintf(bbp, "Record N %d in file bb.txt \n", i);
		fprintf(ccp, "Record N %d in file cc.txt \n", i);
		fprintf(ddp, "Record N %d in file dd.txt \n", i);
		fprintf(eep, "Record N %d in file ee.txt \n", i);
		fprintf(ffp, "Record N %d in file ff.txt \n", i);
	}*/

	//fclose(aap);
	//fclose(bbp);
	//fclose(ccp);
	//fclose(ddp);
	//fclose(eep);
	//fclose(ffp);
}

#include<stdio.h>
main()
{
	char moji1[30],moji2[30],w[30];
	int i;

	printf("•¶Žš—ñ‚P‚ð“ü—Í:");
	scanf("%s", &moji1[0]);

	printf("•¶Žš—ñ2‚ð“ü—Í:");
	scanf("%s", &moji2[0]);
	
	printf("moji1=%s moji2=%s\n",&moji1,moji2);


	for (i = 0; moji1[i] != '\0'; i++)
	{
		w[i] = moji1[i];
	}

	w[i] = '\0';
	for (i = 0; moji2[i] != '\0'; i++)
	{
		moji1[i] = moji2[i];
	}

	moji1[i] = '\0';
	for (i = 0; w[i] != '\0'; i++)
	{
		moji2[i] = w[i];
	}
	moji2[i] = '\0';

	printf("“ü‚ê‘Ö‚¦‚é‚Æ\n");
	printf("moji1=%s moji2=%s", moji1, moji2);

}
/* 
 * Author  : Hemanatha Bhagavathar
 * License : MIT
 */

#include <stdio.h>
int main() {

   /* 
    * An array to store the names of all 12 keys (+1) of a single Octave, in a musical keyboard
    * The last element - 'C' note is the start of the next Octave. Will take that one as well into account
    */ 
   char *key[13] = { "C" , "C#" , "D" , "D#" , "E" , "F" , "F#" , "G" , "G#" , "A" , "A#" , "B" , "C" };

   /* 
    * Names of all 72 scales stored in a single dimensional array 
    * */
   char *name[72] = { "Kanakangi" , "Rathnangi" , "Ganamurthi" , "Vanaspati" , "Manavati" , "Tanapuri" , "Senavati" , "Hanumatodi" , "Dhenuka" , "Natakapriya" , "Kokilapriya" , "Rupavati" , "Gayakapriya" , "Vakulabaranam" , "Mayamalavagowla" , "Chakravaham" , "Suryakantam" , "Hatambari" , "Jhankaradhwani" , "Natabairavi" , "Kiravani" , "Karahapriya" , "Gowri Manohari" , "Varunapriya" , "Mararanjani" , "Charukesi" , "Sarasangi" , "Harikambhoji" , "Dhira Sankarabaranam" , "Naganandini" , "Yagapriya" , "Ragavardhini" , "Gangayabushani" , "Vegadishwari" , "Shulini" , "Calanattai" , "Salagam" , "Jalavarnam" , "Jhalavarali" , "Navaneetam" , "Pavani" , "Raghupriya" , "Ghavambodhi" , "Bhavapriya" , "Shubhapantuvarali" , "Shadvidamargini" , "Suvarnangi" , "Divyamani" , "Dhavalambari" , "Namanarayani" , "Kamavardhini" , "Ramapriya" , "Gamanashrama" , "Vishwambari" , "Shamalangi" , "Shanmughapriya" , "Simhendra Madhyamam" , "Hemavati" , "Dharmavati" , "Nitimati" , "Kantamani" , "Rishabapriya", "Latangi" , "Vachaspati" , "Mechakalyani" , "Chitrambari" , "Sucaritra" , "Jyotiswarupini" , "Dhatuvardani" , "Nasikabhushani" , "Kosalam" , "Rasikapriya" } ;

   /* 
    * key signatures of all 72 scales are stored in a double dimensional array named signature[][]
    * Every element is an array[] by itself, which is the key signature/formula of a given scale/raga
    * 
    * For every element of name[] array there is a 1:1 relationship for every element of signature[][] array
    *
    * zero'th element       - { 1, 1, 3, 2, 1, 1, 3 } = signature of Kanakangi
    * first element         - { 1, 1, 3, 2, 1, 2, 2 } = signature of Rathnangi
    * second element        - { 1, 1, 3, 2, 1, 3, 1 } = signature of Ganamurthi
    * and so on till the last scale...
    * seventy first element - { 3, 1, 2, 1, 3, 1, 1 } = signature of Rasikapriya
    */
   int signature[72][7] = { { 1, 1, 3, 2, 1, 1, 3 }, { 1, 1, 3, 2, 1, 2, 2 }, { 1, 1, 3, 2, 1, 3, 1 }, { 1, 1, 3, 2, 2, 1, 2 }, { 1, 1, 3, 2, 2, 2, 1 }, { 1, 1, 3, 2, 3, 1, 1 }, { 1, 2, 2, 2, 1, 1, 3 }, { 1, 2, 2, 2, 1, 2, 2 }, { 1, 2, 2, 2, 1, 3, 1 }, { 1, 2, 2, 2, 2, 1, 2 }, { 1, 2, 2, 2, 2, 2, 1 }, { 1, 2, 2, 2, 3, 1, 1 }, { 1, 3, 1, 2, 1, 1, 3 }, { 1, 3, 1, 2, 1, 2, 2 }, { 1, 3, 1, 2, 1, 3, 1 }, { 1, 3, 1, 2, 2, 1, 2 }, { 1, 3, 1, 2, 2, 2, 1 }, { 1, 3, 1, 2, 3, 1, 1 }, { 2, 1, 2, 2, 1, 1, 3 }, { 2, 1, 2, 2, 1, 2, 2 }, { 2, 1, 2, 2, 1, 3, 1 }, { 2, 1, 2, 2, 2, 1, 2 }, { 2, 1, 2, 2, 2, 2, 1 }, { 2, 1, 2, 2, 3, 1, 1 }, { 2, 2, 1, 2, 1, 1, 3 }, { 2, 2, 1, 2, 1, 2, 2 }, { 2, 2, 1, 2, 1, 3, 1 }, { 2, 2, 1, 2, 2, 1, 2 }, { 2, 2, 1, 2, 2, 2, 1 }, { 2, 2, 1, 2, 3, 1, 1 }, { 3, 1, 1, 2, 1, 1, 3 }, { 3, 1, 1, 2, 1, 2, 2 }, { 3, 1, 1, 2, 1, 3, 1 }, { 3, 1, 1, 2, 2, 1, 2 }, { 3, 1, 1, 2, 2, 2, 1 }, { 3, 1, 1, 2, 3, 1, 1 }, { 1, 1, 4, 1, 1, 1, 3 }, { 1, 1, 4, 1, 1, 2, 2 }, { 1, 1, 4, 1, 1, 3, 1 }, { 1, 1, 4, 1, 2, 1, 2 }, { 1, 1, 4, 1, 2, 2, 1 }, { 1, 1, 4, 1, 3, 1, 1 }, { 1, 2, 3, 1, 1, 1, 3 }, { 1, 2, 3, 1, 1, 2, 2 }, { 1, 2, 3, 1, 1, 3, 1 }, { 1, 2, 3, 1, 2, 1, 2 }, { 1, 2, 3, 1, 2, 2, 1 }, { 1, 2, 3, 1, 3, 1, 1 }, { 1, 3, 2, 1, 1, 1, 3 }, { 1, 3, 2, 1, 1, 2, 2 }, { 1, 3, 2, 1, 1, 3, 1 }, { 1, 3, 2, 1, 2, 1, 2 }, { 1, 3, 2, 1, 2, 2, 1 }, { 1, 3, 2, 1, 3, 1, 1 }, { 2, 1, 3, 1, 1, 1, 3 }, { 2, 1, 3, 1, 1, 2, 2 }, { 2, 1, 3, 1, 1, 3, 1 }, { 2, 1, 3, 1, 2, 1, 2 }, { 2, 1, 3, 1, 2, 2, 1 }, { 2, 1, 3, 1, 3, 1, 1 }, { 2, 2, 2, 1, 1, 1, 3 }, { 2, 2, 2, 1, 1, 2, 2 }, { 2, 2, 2, 1, 1, 3, 1 }, { 2, 2, 2, 1, 2, 1, 2 }, { 2, 2, 2, 1, 2, 2, 1 }, { 2, 2, 2, 1, 3, 1, 1 }, { 3, 1, 2, 1, 1, 1, 3 }, { 3, 1, 2, 1, 1, 2, 2 }, { 3, 1, 2, 1, 1, 3, 1 }, { 3, 1, 2, 1, 2, 1, 2 }, { 3, 1, 2, 1, 2, 2, 1 }, { 3, 1, 2, 1, 3, 1, 1 } };

   /* Variables used in for loops */
   int i, j, k, l, m; 

   /* A temporary array to store each key signature inside the loop for interation */
   int temp[7]; 

   /* An array to store the keys to print in reverse, for Avarohanam */
   char *reverse[8]; 

   /* Set a loop for all 72 scales */
   for(i=0; i<72; i++) {
   	printf("\n\n\nScale %02d\t:\t%3s", (i+1), name[i]);
	printf("\nArohanam\t:\t");

	/* 
	 * Create a temp array[] to store the signature of i'th scale.  The contents of this temp[] array is 
	 * valid just for one iternation alone , and then gets replaced with the next scale's signature.
	 */
	for(j=0; j<7; j++) 
		temp[j] = signature[i][j];

	/* There are 13 entries in the key[] array. So set a loop for it */
	for(k=0; k<13; k++) {

		m=0;

		/* 
		 * Out of 13 key notes in key[] array, we need to pick only 8 notes and skip the rest.
		 * We need to do this for every i'th loop (ie, for every scale)
		 *
		 * Whatever note we pick will be one of the 8 swaras of that (i'th) particular scale. 
		 *
		 * We will use the values stored in the temp array[] that we assembled before, as an incremental counter
		 * for skipping the note/swara that are NOT part of the scale.
		 *
		 * In the same loop, we will also fill up another array[] named "reverse". We will then use that array
		 * to print it in reverse as Avarohanam. 
		 */

		for(l=0; l<=7; l++) {
			printf("%3s\t", key[k]) ;
			reverse[m++] = key[k] ;     
			k = k + temp[l] ;  /* Skip happens here. If you understood this line clearly, you got it! */
		}
   	}
	printf("\nAvarohanam\t:\t");
   	for(m=7; m>=0; m--)
		printf("%3s\t", reverse[m]) ; 
   }
   printf("\n\n");
}


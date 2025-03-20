void stampaVettore(int vett[], int dim, char sep);
/**Funzione che stampa a video il vettore.
 * @param int vettore da stampare
 * #@param int dimensione del vettore
 * @param char separatore degli elementi del vettore
 */

void riempiVettore(int vett[], int dim);
/**Funzione che riempie un vettore con numeri inseriti dall'utente
 * @param int vettore da riempire
 * @param int dimensione del vettore da riempire
*/

void riempiVettoreCasuale(int vett[], int dim, int min, int max);
/**Funzione che riempie un vettore con elementi casuali compresi tra il numero minimo e il valore massimo
 * @param int vettore da riempire
 * @param int dimensione del vettore da riempire
 * @param int valore minore da generare
 * @param int valore maggiore da generare
 */

int contaValore(int vett[], int dim, int num);
/**Funzione che conta quante volte un numero compare all'interno del vettore 
 * @param int vettore in cui cercare il numero
 * @param int dimensione del vettore
 * @param int numero da cercare nel vettore
 * @return numero di volte che il numero compare nel vettore
*/

int massimo(int vett[], int dim);
/**Funzione che ricerca il valore massimo presente in un vettore
 * @param int vettore in cui cercare il massimo
 * @param int dimensione del vettore
 * @return valore massimo trovato nel vettore
 */

int minimo(int vett[], int dim);
/**Funzione che ricerca il valore minimo presente in un vettore
 * @param int vettore in cui cercare il minimo
 * @param int dimensione del vettore
 * @return valore minimo trovato nel vettore
 */

int somma(int vett[], int dim);
/**Funzione che somma gli elementi di un vettore
 * @param int vettore di cui sommare gli elementi
 * @param int dimensione del vettore
 * @return int somma degli elementi del vettore
 */

float mediaVettore(int vett[], int dim);
/**Funzione che calcola la media degli elementi di un vettore
 * @param int vettore di cui sommare gli elementi
 * @param int dimensione del vettore
 * @return media degli elementi del vettore
 */
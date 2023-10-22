void TriSelection (int T[], int taille){
	for (int i=0; i<taille-1; i++){
		int min_idx = i;
		for (int j=i+1; j<taille; j++){
			if T[j] < T[min_idx]
			min_idx= j;	
		}
	int tmp =T[min_idx];
	T[min_idx]=T[i];
	T[i]=tmp;
	}	
}

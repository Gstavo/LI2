LI2
===
Colocar ao lado das tarefas iniciadas a inicial, e no final de um commit quanto esta feito







1. Calcular o tamanho de uma string s
2. Procurar um caractere c numa string s e devolver o primeiro índice onde ele se encontra
3. Contar o número de ocorrências de um caractere c numa string s
4. Devolver o primeiro índice em que uma string s1 se encontra dentro de outra string s2
5. Veriﬁcar se uma string s1 é preﬁxo de outra string s2	(J-100)
6. Veriﬁcar se uma string s1 é suﬁxo de outra string s2
7. Veriﬁcar se duas strings s1 e s2 são iguais
8. Veriﬁcar se uma string s1 é menor 1 do que uma string s2
9. Devolver -1,0,1 se s1 for menor, igual ou maior que s2
10. Procura o primeiro índice em s1 que contém um dos caracteres na string s2
11. Procura o primeiro índice em s1 que não contém um dos caracteres na string s2
12. Copiar para s1 a string s2
13. Colar s2 ao ﬁm da string s1
14. Mover n bytes da área m2 para a área m1 (esta função deverá funcionar mesmo que m1 e m2
partilhem memória)







int cad_tamanho ( char s []);
int cad_procurar_car ( char c , char s []);
int cad_ocorrencias ( char c , char s []);
int cad_procurar_str ( char s1 [] , char s2 []);
int cad_e_prefixo ( char s1 [] , char s2 []);
int cad_e_sufixo ( char s1 [] , char s2 []);
int cad_iguais ( char s1 [] , char s2 []);
int cad_primeiro ( char s1 [] , char s2 []);
int cad_comparar ( char s1 [] , char s2 []);
int cad_um_dos ( char s1 [] , char s2 []);
int cad_nenhum_dos ( char s1 [] , char s2 []);
int cad_copiar ( char s1 [] , char s2 []);
int cad_colar ( char s1 [] , char s2 []);
int cad_mover (( char m1 [] , char m2 [] , int n );
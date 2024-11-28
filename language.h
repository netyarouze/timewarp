
/* Available Languages

0: English
1: Japanese
2: Spanish
3: French
4: Italian
5: German
6: Portuguese
7: Turkish

*/

#ifdef OPTIONS_C

char Language[8][10] = {
"English",
"���",// Japanese
"Espa�ol",
"Fran�ais",
"Italiano",
"Deutsch",
"Portugu�s",
"T�rk�e"
};

short SelectedLanguage = 0;

char TXT_PressStart[8][18] = {
"Press Start",
"Press Start",// Japanese use English in this case.
"Pulsa Start",
"Appuyez Sur Start",
"Premi Start",
"Start Dr�cken",
"Aperte Start",
"Start A Basin",
};

char TXT_NewGame[8][16] = {
"New Game",
"�������",
"Comenzar",
"Nouvelle Partie",
"Nuovo Gioco",
"Neues Spiel",
"Novo Jogo",
"Yen� Oyun",
};

char TXT_Options[8][15] = {
"Options",
"������",
"Opciones",
"Options",
"Opzioni",
"Optionen",
"Op��es",
"Ayarlar",
};

char TXT_Difficulty[8][19] = {
"Difficulty",
"����",
"Dificultad",
"Difficult�",
"Difficolt�",
"Schwierigkeitsgrad",
"Dificuldade",
"Zorluk",
};

char TXT_Vibration[8][15] = {
"Vibration",
"����������",
"Vibraci�n",
"Vibrations",
"Vibrazione",
"Vibration",
"Vibra��o",
"Titre�im", // '�' is actually displayed as a lowercase 's' with cedilla.
};

char TXT_On[8][15] = {
"On",
"On",
"S�",
"Oui",//Activ�e / Avec
"On",
"Ein",
"On",
"A�ik",
};

char TXT_Off[8][15] = {
"Off",
"Off",
"No",
"Non",//D�sactiv�e / Sans
"Off",
"Aus",
"Off",
"Kapali",
};

char TXT_Easy[8][15] = {
"Easy",
"����",
"F�cil",
"Facile",
"Facile",
"Leicht",
"F�cil",
"Kolay",
};

char TXT_Normal[8][15] = {
"Normal",
"���",
"Normal",
"Normal",
"Normale",
"Normal",
"Normal",
"Normal",
};

char TXT_Hard[8][15] = {
"Hard",
"�ݾ���",
"Dif�cil",
"Dur",
"Difficile",
"Schwierig",
"Dif�cil",
"Zor",
};

char TXT_Lives[8][15] = {
"Lives",
"����", // Dirk instead of Lives.
"Vidas",
"Vies",
"Vite",
"Leben",
"Vidas",
"Hayat",
};

char TXT_Continue[8][15] = {
"Continue?",
"����", // Japanese
"�Continuar?",
"Continuer?", // French
"Continuare?", // Italian
"Fortsetzen?", // German
"Continuar?", // Portuguese
"Devam etmek?", // Turkish
};

char TXT_Credits[8][15] = {
"Credits",
"������", // Japanese
"Cr�ditos",
"Cr�dits", // French
"Crediti", // Italian
"Kredite", // German
"Cr�ditos", // Portuguese
"Kredi", // Turkish
};

char TXT_Up[8][15] = {
"Up",
"��", // Japanese
"Arriba",
"Haut", // French
"Su", // Italian
"Hoch", // German
"Cima", // Portuguese
"Yukari", // Turkish
};

char TXT_Down[8][15] = {
"Down",
"��", // Japanese
"Abajo",
"Bas", // French
"Gi�", // Italian
"Runter", // German
"Baixo", // Portuguese
"A�a��", // Turkish ( � is displayed as a lowercase 's' with cedilla).
}; // � is displayed as a lowercase 'g' with breve.
// � is displayed as a lowercase 'i' without dot.

char TXT_Left[8][15] = {
"Left",
"���", // Japanese
"Izquierda",
"Gauche", // French
"Sinistra", // Italian
"Links", // German
"Esquerda", // Portuguese
"Sol", // Turkish
};

char TXT_Right[8][15] = {
"Right",
"�׾", // Japanese
"Derecha",
"Droite", // French
"Destra", // Italian
"Rechts", // German
"Direita", // Portuguese
"Sa�", // Turkish ( � is displayed as a lowercase 'g' with breve).
};

char TXT_Sword[8][15] = {
"Sword",
"��", // Japanese
"Espada",
"�p�e", // French
"Spada", // Italian
"Schwert", // German
"Espada", // Portuguese
"k�l��", // Turkish ( � is displayed as a lowercase 'i' without dot).
};

char TXT_Pause[8][15] = {
"Pause",
"����", // Japanese
"Pausa",
"Pause", // French
"Pausa", // Italian
"Pause", // German
"Pausa", // Portuguese
"Duraklat", // Turkish
};

char TXT_Treasures[8][15] = {
"Treasures",
"۾���", // Japanese
"Tesoros",
"Tr�sors", // French
"Tesori", // Italian
"Sch�tze", // German
"Tesouros", // Portuguese
"Hazine", // Turkish
};


char TXT_Mistakes[8][15] = {
"Mistakes",
"��", // Japanese
"Errores",
"Erreurs", // French
"Sbagli", // Italian
"Fehler", // German
"Erros", // Portuguese
"Hata", // Turkish
};

char TXT_Retries[8][18] = {
"Retries",
"����", // Japanese
"Reintentos",
"Tentatives", // French
"Tentativi", // Italian
"Wiederholungen", // German
"Tentativas", // Portuguese
"Devamlar", // Turkish 
};

char TXT_Ending[8][15] = {
"Ending",
"�������", // Japanese
"Final",
"Fin", // French
"Fine", // Italian
"Ende", // German
"Final", // Portuguese
"Son", // Turkish
};

char TXT_Score[8][15] = {
"Score",
"���", // Japanese
"Puntuaci�n",
"Score", // French
"Punteggio", // Italian
"Punktzahl", // German
"Pontua��o", // Portuguese
"Son", // Turkish
};

char TXT_Good[8][15] = {
"Good",
"��", // Japanese
"Bueno",
"Bonne", // French
"Buona", // Italian
"Gut", // German
"Bom", // Portuguese
"Iyi", // Turkish
};

char TXT_Bad[8][15] = {
"Bad",
"���", // Japanese
"Malo",
"Mauvaise", // French
"Brutto", // Italian
"Schlechtes", // German
"Ruim", // Portuguese
"K�t�", // Turkish
};


char TXT_Perfect[8][15] = {
"Perfect!",
"�����!", // Japanese
"�Perfecto!",
"Parfait !", // French
"Perfetto!", // Italian
"Perfekt!", // German
"Perfeito!", // Portuguese
"Kusursuz!", // Turkish
};

char TXT_ScreenAdjust[8][20] = {
"Screen Adjust",
"��������", // Japanese
"Ajustar Pantalla",
"R�glage de l'�cran", // French
"Correzione Schermo", // Italian
"Bildschirm Anpassen", // German
"Ajuste De Tela", // Portuguese
"Ekran Ayari", // Turkish
};

char Main_Menu_Entries[2][16];
char Options_Menu_Entries[3][20];
char Difficulty_Entries[3][15];
char OnOff_Entries[2][15];
char Move_Entries[6][15];

#else

extern char Language[8][10];
extern short SelectedLanguage;
extern char TXT_PressStart[8][18];
extern char TXT_Lives[8][15];
extern char TXT_Continue[8][15];
extern char TXT_Credits[8][15];
extern char TXT_Up[8][15];
extern char TXT_Down[8][15];
extern char TXT_Left[8][15];
extern char TXT_Right[8][15];
extern char TXT_Sword[8][15];
extern char Move_Entries[6][15];
extern char TXT_Pause[8][15];
extern char OnOff_Entries[2][15];
extern char TXT_Treasures[8][15];
extern char TXT_Mistakes[8][15];
extern char TXT_Retries[8][18];
extern char TXT_Ending[8][15];
extern char TXT_Good[8][15];
extern char TXT_Bad[8][15];
extern char TXT_Score[8][15];
extern char TXT_Perfect[8][15];
extern char TXT_ScreenAdjust[8][16];
extern char TXT_Difficulty[8][19];
extern char Difficulty_Entries[3][15];
#endif
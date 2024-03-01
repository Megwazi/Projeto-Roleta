#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
#include<conio.h>
#include<locale.h>

struct champ{
    char nome[50];
};

struct lane{
    char lane[15];
};

int main(){
    setlocale(LC_ALL, "Portuguese");
    int champRandom, laneRandom, op;
    int champFirst = 1, laneFirst = 1;

    //------------------------------------------------------------------------------

    struct lane lanes[5];

    strcpy(lanes[0].lane, "Top Lane");
    strcpy(lanes[1].lane, "Jungle");
    strcpy(lanes[2].lane, "Mid Lane");
    strcpy(lanes[3].lane, "Ad Carry");
    strcpy(lanes[4].lane, "Suporte");
    strcpy(lanes[5].lane, "");

    //------------------------------------------------------------------------------

    struct champ champs[164];

    strcpy(champs[0].nome, "Aatrox");strcpy(champs[1].nome, "Ahri");strcpy(champs[2].nome, "Akali");strcpy(champs[3].nome, "Akshan");strcpy(champs[4].nome, "Alistar");
    strcpy(champs[5].nome, "Amumu");strcpy(champs[6].nome, "Anivia");strcpy(champs[7].nome, "Annie");strcpy(champs[8].nome, "Aphelios");strcpy(champs[9].nome, "Ashe");
    strcpy(champs[10].nome, "Aurelion Sol");strcpy(champs[11].nome, "Azir");strcpy(champs[12].nome, "Bardo");strcpy(champs[13].nome, "Bel'Veth");strcpy(champs[14].nome, "Blitzcrank");
    strcpy(champs[15].nome, "Brand");strcpy(champs[16].nome, "Braum");strcpy(champs[17].nome, "Caitlyn");strcpy(champs[18].nome, "Camille");strcpy(champs[19].nome, "Cassiopeia");
    strcpy(champs[20].nome, "Cho'Gath");strcpy(champs[21].nome, "Corki");strcpy(champs[22].nome, "Darius");strcpy(champs[23].nome, "Diana");strcpy(champs[24].nome, "Dr. Mundo");
    strcpy(champs[25].nome, "Draven");strcpy(champs[26].nome, "Ekko");strcpy(champs[27].nome, "Elise");strcpy(champs[28].nome, "Evelynn");strcpy(champs[29].nome, "Ezreal");
    strcpy(champs[30].nome, "Fiddlesticks");strcpy(champs[31].nome, "Fiora");strcpy(champs[32].nome, "Fizz");strcpy(champs[33].nome, "Galio");strcpy(champs[34].nome, "Gangplank");
    strcpy(champs[35].nome, "Garen");strcpy(champs[36].nome, "Gnar");strcpy(champs[37].nome, "Gragas");strcpy(champs[38].nome, "Graves");strcpy(champs[39].nome, "Gwen");
    strcpy(champs[40].nome, "Hecarim");strcpy(champs[41].nome, "Heimerdinger");strcpy(champs[42].nome, "Illaoi");strcpy(champs[43].nome, "Irelia");strcpy(champs[44].nome, "Ivern");
    strcpy(champs[45].nome, "Janna");strcpy(champs[46].nome, "Jarvan IV");strcpy(champs[47].nome, "Jax");strcpy(champs[48].nome, "Jayce");strcpy(champs[49].nome, "Jhin");
    strcpy(champs[50].nome, "Jinx");strcpy(champs[51].nome, "K'Sante");strcpy(champs[52].nome, "Kai'sa");strcpy(champs[53].nome, "Kalista");strcpy(champs[54].nome, "Karma");
    strcpy(champs[55].nome, "Karthus");strcpy(champs[56].nome, "Kassadin");strcpy(champs[57].nome, "Katarina");strcpy(champs[58].nome, "Kayle");strcpy(champs[59].nome, "Kayn");
    strcpy(champs[60].nome, "Kennen");strcpy(champs[61].nome, "Kha'zix");strcpy(champs[62].nome, "Kindred");strcpy(champs[63].nome, "Kled");strcpy(champs[64].nome, "Kog'Maw");
    strcpy(champs[65].nome, "Leblanc");strcpy(champs[66].nome, "Lee Sin");strcpy(champs[67].nome, "Leona");strcpy(champs[68].nome, "Lillia");strcpy(champs[69].nome, "Lissandra");
    strcpy(champs[70].nome, "Lucian");strcpy(champs[71].nome, "Lulu");strcpy(champs[72].nome, "Lux");strcpy(champs[73].nome, "Malphite");strcpy(champs[74].nome, "Malzahar");
    strcpy(champs[75].nome, "Maokai");strcpy(champs[76].nome, "Master Yi");strcpy(champs[77].nome, "Milio");strcpy(champs[78].nome, "Miss Fortune");strcpy(champs[79].nome, "Mordekaiser");
    strcpy(champs[80].nome, "Morgana");strcpy(champs[81].nome, "Naafiri");strcpy(champs[82].nome, "Nami");strcpy(champs[83].nome, "Nasus");strcpy(champs[84].nome, "Nautilus");
    strcpy(champs[85].nome, "Neeko");strcpy(champs[86].nome, "Nidalee");strcpy(champs[87].nome, "Nilah");strcpy(champs[88].nome, "Nocturne");strcpy(champs[89].nome, "Nunu e Willump");
    strcpy(champs[90].nome, "Olaf");strcpy(champs[91].nome, "Orianna");strcpy(champs[92].nome, "Ornn");strcpy(champs[93].nome, "Pantheon");strcpy(champs[94].nome, "Poppy");
    strcpy(champs[95].nome, "Pyke");strcpy(champs[96].nome, "Qiyana");strcpy(champs[97].nome, "Quinn");strcpy(champs[98].nome, "Rakan");strcpy(champs[99].nome, "Rammus");
    strcpy(champs[100].nome, "Rek'sai");strcpy(champs[101].nome, "Rell");strcpy(champs[102].nome, "Renata Glasc");strcpy(champs[103].nome, "Renekton");strcpy(champs[104].nome, "Rengar");
    strcpy(champs[105].nome, "Riven");strcpy(champs[106].nome, "Rumble");strcpy(champs[107].nome, "Ryze");strcpy(champs[108].nome, "Samira");strcpy(champs[109].nome, "Sejuani");
    strcpy(champs[110].nome, "Senna");strcpy(champs[111].nome, "Seraphine");strcpy(champs[112].nome, "Sett");strcpy(champs[113].nome, "Shaco");strcpy(champs[114].nome, "Shen");
    strcpy(champs[115].nome, "Shyvana");strcpy(champs[116].nome, "Singed");strcpy(champs[117].nome, "Sion");strcpy(champs[118].nome, "Sivir");strcpy(champs[119].nome, "Skarner");
    strcpy(champs[120].nome, "Sona");strcpy(champs[121].nome, "Soraka");strcpy(champs[122].nome, "Swain");strcpy(champs[123].nome, "Sylas");strcpy(champs[124].nome, "Syndra");
    strcpy(champs[125].nome, "Tahm Kench");strcpy(champs[126].nome, "Taliyah");strcpy(champs[127].nome, "Talon");strcpy(champs[128].nome, "Taric");strcpy(champs[129].nome, "Teemo");
    strcpy(champs[130].nome, "Thresh");strcpy(champs[131].nome, "Tristana");strcpy(champs[132].nome, "Trundle");strcpy(champs[133].nome, "Tryndamere");strcpy(champs[134].nome, "Twisted Fate");
    strcpy(champs[135].nome, "Twitch");strcpy(champs[136].nome, "Udyr");strcpy(champs[137].nome, "Urgot");strcpy(champs[138].nome, "Varus");strcpy(champs[139].nome, "Vayne");
    strcpy(champs[140].nome, "Veigar");strcpy(champs[141].nome, "Vel'koz");strcpy(champs[142].nome, "Vex");strcpy(champs[143].nome, "Vi");strcpy(champs[144].nome, "Viego");
    strcpy(champs[145].nome, "Viktor");strcpy(champs[146].nome, "Vladimir");strcpy(champs[147].nome, "Volibear");strcpy(champs[148].nome, "Warwick");strcpy(champs[149].nome, "Wukong");
    strcpy(champs[150].nome, "Xayah");strcpy(champs[151].nome, "Xerath");strcpy(champs[152].nome, "Xin Zhao");strcpy(champs[153].nome, "Yasuo");strcpy(champs[154].nome, "Yone");
    strcpy(champs[155].nome, "Yorick");strcpy(champs[156].nome, "Yuumi");strcpy(champs[157].nome, "Zac");strcpy(champs[158].nome, "Zed");strcpy(champs[159].nome, "Zeri");
    strcpy(champs[160].nome, "Ziggs");strcpy(champs[161].nome, "Zilean");strcpy(champs[162].nome, "Zoe");strcpy(champs[163].nome, "Zyra");strcpy(champs[164].nome, "");

    //------------------------------------------------------------------------------

    srand(time(NULL));

    for(;;){
        system("cls");
        printf("----------League Troll Build 2.0----------\n\n");

        if(champFirst == 1){

            printf("Campeão Selecionado: %s\n", champs[164].nome);
        }else{

            printf("Campeão Selecionado: %s\n", champs[champRandom].nome);
        }

        if(laneFirst == 1){

            printf("Lane Selecionada: %s\n\n", lanes[5].lane);
        }else{

            printf("Lane Selecionada: %s\n\n", lanes[laneRandom].lane);
        }

        printf("Roletar Campeão\n\n");
        printf("------------------------------------------\n");
        printf("Insira a opção desejada: ");
        scanf("%d", &op);
        system("cls");
        printf("----------League Troll Build 2.0----------\n\n");

        switch(op){
            case 1:
                champRandom = rand() % 165 + 0;
                champFirst = 0;
                printf("Campeão selecionado: %s", champs[champRandom].nome);
                printf("\n\n------------------------------------------\n");
                printf("Pressione qualquer tecla para voltar ao menu");
                getch();
                break;

            case 2:
                laneRandom = rand() % 6 + 0;
                laneFirst = 0;
                printf("Lane selecionada: %s", lanes[laneRandom].lane);
                printf("\n\n------------------------------------------\n");
                printf("Pressione qualquer tecla para voltar ao menu");
                getch();
                break;

            default:
                printf("Opção inexistente!");
                printf("\n\n------------------------------------------\n");
                printf("Pressione qualquer tecla para voltar ao menu");
                getch();
                break;
        }
    }
}

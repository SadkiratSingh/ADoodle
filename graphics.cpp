#include<graphics.h>

int main()
{
    int gd=0,gm;
    initgraph(&gd,&gm,"");
    int bg[]={0,0,0,480,640,480,640,0,0,0};
    drawpoly(5,bg);
    setfillstyle(1,COLOR(255, 255, 230));
    fillpoly(5,bg);
    setcolor(BLACK);

    delay(90);
    //boy1

    //face//
    int face1[]={87,133,109,114,101,60,82,74,80,118,87,133};
    setfillstyle(1,COLOR(255,179,204));
    fillpoly(6,face1);
    //face//

    //Hair//
    int hair1[]={80,118,73,76,101,60,82,74,80,118};
    setfillstyle(1,BLACK);
    fillpoly(5,hair1);
    //Hair//

    //eyes,mouth,brows
    line(87,78,93,82);
    line(95,74,98,68);
    line(89,86,92,95);
    line(97,80,100,89);
    line(90,103,98,109);
    line(98,109,104,101);
    //eyes,mouth,brows


    //arm1
    int arm1[]={63,173,83,161,90,146,101,133,102,137,95,147,100,156,90,176,88,175,66,196,63,173};
    setfillstyle(1,12);
    fillpoly(11,arm1);
    //arm1

    //arm2
    int arm2[]={133,88,140,79,166,56,182,36,184,40,176,57,181,64,177,81,173,81,165,78,162,82,151,83,141,97,133,88};
    setfillstyle(1,12);
    fillpoly(14,arm2);
    //arm2

    //torso
    int torso1[]={63,173,87,133,109,114,133,88,141,97,138,103,122,125,123,154,130,177,105,190,104,184,90,176,100,156,95,147,
    102,137,101,133,90,146,83,161,63,173};
    setfillstyle(1,COLOR(255,100,0));
    fillpoly(19,torso1);
    //torso

    //legs
    int legs[]={105,190,76,221,90,255,103,252,95,227,119,209,155,240,146,217,151,209,130,177,105,190};
    setfillstyle(1,1);
    fillpoly(11,legs);
    //legs

    //shoes
    int shoes[]={90,255,92,263,79,277,104,277,103,252,90,255};
    setfillstyle(1,15);
    fillpoly(6,shoes);
    //shoes
    //boy1


    //boy2


    int hair2[]={165,194,160,165,161,154,172,146,187,140,192,153,185,154,177,159,169,158,162,183,165,194};
    setfillstyle(1,BLACK);
    fillpoly(11,hair2);
    //hair

    //face
    int face2[]={192,153,194,188,184,204,170,204,165,194,162,183,169,158,177,159,185,154,192,153};
    setfillstyle(1,12);
    fillpoly(10,face2);
    //face

    //eyes,brow
    line(172,175,174,180);
    line(184,173,184,179);
    line(178,193,184,193);
    line(184,193,189,184);
    //eyes,brow

    //torso
    int torso2[]={194,188,218,154,223,165,197,205,197,229,209,244,221,264,205,288,191,288,202,264,184,247,126,299,126,281,
    144,260,155,240,146,217,151,209,165,194,170,204,184,204,194,188};
    setfillstyle(1,4);
    fillpoly(20,torso2);
    //torso

    //left-foot
    int lfoot[]={126,281,107,302,126,299,126,281};
    setfillstyle(1,15);
    fillpoly(4,lfoot);
    //left-foot

    //left-hand
    int lhand[]={155,240,168,242,181,228,174,214,163,229,157,214,158,224,155,236,155,240};
    setfillstyle(1,12);
    fillpoly(9,lhand);
    //left-hand

    //right-foot
    int rfoot[]={205,288,213,299,188,299,191,288,205,288};
    setfillstyle(1,15);
    fillpoly(5,rfoot);
    //right-foot

    //right-hand
    int rhand[]={218,154,225,140,230,147,223,165,218,154};
    setfillstyle(1,12);
    fillpoly(5,rhand);
    //right-hand

    //boy2

    delay(90);

    //boy3

    //face3//
    int face3[]={245,94,263,111,277,108,280,104,284,79,286,55,275,60,261,49,258,52,255,84,244,73,245,94};
    setfillstyle(1,12);
    fillpoly(12,face3);
    //face3//

    //hair
    int hair3[]={244,73,247,48,259,32,265,34,275,42,286,55,275,60,261,49,258,52,255,84,244,73};
    setfillstyle(1,BLACK);
    fillpoly(11,hair3);
    //hair

    //eyes,brow
    line(270,74,267,80);
    line(279,79,276,84);
    line(266,91,268,105);
    line(268,105,276,100);
    //eyes,brow

    //torso
    int torso3[]={245,94,217,87,206,91,201,101,203,130,221,113,226,123,225,140,230,147,223,165,248,171,261,169,270,144,
    294,136,307,130,312,107,305,73,295,78,296,111,280,104,277,108,263,111,245,94};
    setfillstyle(1,14);
    fillpoly(23,torso3);
    //torso

    //left-hand
    int lhand2[]={225,140,213,149,203,130,221,113,226,123,225,140};
    setfillstyle(1,12);
    fillpoly(6,lhand2);
    //left-hand

    //legsI
    int legs2[]={261,169,280,200,293,235,290,241,276,263,262,254,263,245,270,232,245,198,209,244,197,229,223,165,248,171,261,169};
    setfillstyle(1,1);
    fillpoly(14,legs2);
    //legsI

    //legsII
    int legsII[]={202,264,188,278,172,278,184,247,202,264};
    setfillstyle(1,1);
    fillpoly(5,legsII);
    //legsII

    //left-foot
    int lfoot2[]={188,278,184,289,168,290,167,281,172,278,188,278};
    setfillstyle(1,15);
    fillpoly(6,lfoot2);
    //left-foot

    //right-foot
    int rfoot2[]={276,263,274,271,288,283,288,288,262,289,262,254,276,263};
    setfillstyle(1,15);
    fillpoly(7,rfoot2);
    //right-foot

    //right-hand
    int rhand2[]={305,73,305,63,293,48,295,78,305,73};
    setfillstyle(1,12);
    fillpoly(5,rhand2);
    //right-hand
    //boy3

    delay(90);
    //boy4

    //face
    int face4[]={350,75,352,93,355,109,357,128,362,135,373,132,385,119,386,95,378,98,372,91,357,83,350,75};
    setfillstyle(1,12);
    fillpoly(12,face4);
    //face

    //face-hair
    line(385,119,386,95);
    line(386,95,378,98);
    line(378,98,372,91);
    line(372,91,357,83);
    line(357,83,350,75);
    //face-hair

    //hairI
    int hair4I[]={386,95,378,98,372,91,357,83,350,75,357,65,374,58,382,64,387,78,386,95};
    setfillstyle(1,BLACK);
    fillpoly(10,hair4I);
    //hairI

    //hairII
    int hair4II[]={386,95,396,87,399,107,393,119,385,119,386,95};
    setfillstyle(1,BLACK);
    fillpoly(7,hair4II);
    //hairII

    //torso
    int torso4[]={385,119,407,137,413,113,420,111,420,154,418,154,397,152,397,168,403,175,387,184,375,183,365,162,361,144,
    343,130,338,108,340,69,346,76,350,107,355,109,357,128,362,135,373,132,385,119};
    setfillstyle(1,5);
    fillpoly(23,torso4);
    //torso

    //legs

    int legs3[]={375,183,359,232,359,241,375,267,366,280,376,290,385,282,388,277,392,263,375,231,390,204,415,234,
    420,234,422,219,415,211,413,198,413,190,403,175,387,184,375,183};
    setfillstyle(1,13);
    fillpoly(20,legs3);
    //legs

    //eyes,brows
    line(367,98,369,105);
    line(358,104,361,113);
    line(361,122,368,125);
    line(368,125,372,109);
    //eyes,brows

    //right-hand
    int rhand3[]={413,113,408,108,406,109,406,98,409,86,416,94,420,111,413,113};
    setfillstyle(1,12);
    fillpoly(8,rhand3);
    //right-hand

    //left-hand
    int lhand3[]={340,69,342,66,346,68,346,76,340,69};
    setfillstyle(1,12);
    fillpoly(5,lhand3);
    //left-hand

    //boy4

    //boy5

    //hair
    int hair5I[]={473,169,470,149,457,138,444,145,438,178,450,158,453,148,460,164,467,163,473,169};
    setfillstyle(1,BLACK);
    fillpoly(10,hair5I);
    //hair

    //face
    int face5[]={438,178,441,199,446,210,458,208,469,191,473,169,467,163,460,164,453,148,450,158,438,178};
    setfillstyle(1,12);
    fillpoly(11,face5);
    //face

    //torsoI
    int torso5I[]={441,199,425,212,422,219,420,234,421,243,437,254,441,268,445,282,455,283,452,264,447,239,446,210,441,199};
    setfillstyle(1,GREEN);
    fillpoly(13,torso5I);
    //torsoI

    //left-leg
    int lleg[]={421,243,408,278,396,274,385,282,376,290,367,302,411,302,431,268,441,268,437,254,421,243,};
    setfillstyle(1,4);
    fillpoly(11,lleg);
    //left-leg

    //left-foot
    int lfoot3[]={376,290,366,280,358,289,344,292,345,303,367,302,376,290};
    setfillstyle(1,15);
    fillpoly(7,lfoot3);
    //left-foot

    //left-hand
    int lhand4[]={445,282,431,304,452,297,455,283,445,282};
    setfillstyle(1,12);
    fillpoly(5,lhand4);
    //left-hand

    //right-leg
    int rleg[]={452,264,466,259,465,281,466,295,477,285,483,256,488,232,480,228,460,233,447,239,452,264};
    setfillstyle(1,4);
    fillpoly(11,rleg);
    //right-leg

    //right-arm
    int rarm[]={473,169,498,170,499,176,494,196,483,183,480,190,469,191,473,169};
    setfillstyle(1,2);
    fillpoly(8,rarm);
    //right-arm

    //right-hand

    int rhand5[]={480,190,476,205,491,211,494,196,483,183,480,190};
    setfillstyle(1,12);
    fillpoly(6,rhand5);
    //right-hand


    //torsoII
    int torso5II[]={458,208,460,233,447,239,446,210,458,208};
    setfillstyle(1,2);
    line(458,208,460,233);
    fillpoly(5,torso5II);
    //torsoII

    //right-foot
    int rfoot3[]={477,285,491,301,488,305,469,305,466,295,477,285};
    setfillstyle(1,15);
    fillpoly(6,rfoot3);
    //right-foot

    //bun
    int bun[]={438,178,423,179,415,185,413,190,413,198,415,211,422,219,425,212,441,199,438,178};
    setfillstyle(1,BLACK);
    fillpoly(10,bun);
    //bun


    //eyes,brows
    line(451,173,449,180);
    line(460,180,458,186);
    line(449,191,451,200);
    line(451,200,456,197);
    //eyes,brows

    //boy5

    delay(90);

    //girl//

    //hair//
    setfillstyle(1,0);
    int hair[]={316,145,312,142,308,132,312,109,319,101,330,99,337,105,340,120,343,128,340,137,336,137,336,122,337,119,
    332,118,329,115,327,114,323,116,320,122,315,127,314,134,316,138,316,145};
    drawpoly(22,hair);
    fillpoly(22,hair);
    //hair

    //face//
    setfillstyle(1,COLOR(255,179,204));
    int face6[]={340,137,334,147,330,150,324,150,316,145,316,138,314,134,315,127,320,122,323,116,327,114,329,115,332,118,
    337,119,336,122,336,137,340,137};
    drawpoly(17,face6);
    fillpoly(17,face6);
    //face//

    //torso
    setfillstyle(1,COLOR(153, 51, 255));
    int torso6[]={340,137,347,148,345,155,343,158,338,162,341,175,338,186,333,199,329,192,320,190,315,185,311,178,
    309,170,308,158,314,158,308,152,312,142,316,145,324,150,330,150,334,147,340,137};
    drawpoly(22,torso6);
    fillpoly(22,torso6);
    //torso

    //left-foot//
    setfillstyle(1,COLOR(128, 0, 42));
    int lfoot4[]={315,185,310,191,307,190,305,185,303,182,304,176,308,175,309,170,311,178,315,185};
    drawpoly(10,lfoot4);
    fillpoly(10,lfoot4);
    //left-foot//

    //right-foot//
    setfillstyle(1,COLOR(128, 0, 42));
    int rfoot4[]={333,199,329,192,327,199,327,204,332,208,333,199};
    drawpoly(6,rfoot4);
    fillpoly(6,rfoot4);
    //right-foot//

    //left-arm//
    setfillstyle(1,COLOR(255,179,204));
    int larm[]={308,152,302,130,307,133,312,145,309,147};
    drawpoly(5,larm);
    fillpoly(5,larm);
    //right-arm
    setfillstyle(1,COLOR(255,179,204));
    int rarm2[]={347,148,350,137,343,128,340,137,347,148};
    drawpoly(5,rarm2);
    fillpoly(5,rarm2);

    line(320,132,322,130);
    line(322,130,324,132);
    line(328,129,330,125);
    line(330,125,332,127);
    line(323,141,327,142);
    line(327,142,332,134);
    //girl//

    setbkcolor(COLOR(255, 255, 230));
    setcolor(COLOR(255, 51, 51));
    settextstyle(9,0,8);
    delay(40);
    outtextxy(50,330,"G");
    delay(40);
    outtextxy(130,330,"O");
    delay(40);
    outtextxy(210,330,"O");
    delay(40);
    outtextxy(290,330,"G");
    delay(40);
    outtextxy(370,330,"L");
    delay(40);
    outtextxy(450,330,"E");
    delay(40);
    getch();
    closegraph();
}

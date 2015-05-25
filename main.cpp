#include "graphics.hpp"
#include "widgets.hpp"
#include "text.hpp"
#include "textbox.hpp"
#include "jatekmester.hpp"
#include <vector>
#include <iostream>

using namespace genv;
#define width 510
#define height 510
#define ellenorzes gout << move_to(400,470) << color(255,255,255) << box(100,30) << move_to(410, 490) << color(0,0,0) << text("Ellenorzes");
#define nyert gout << move_to(0,0) << color(0,255,0) << box(width,height) << move_to(225, 200) << color(0,0,0) << text("Nyertel");
#define veszt gout << move_to(0,0) << color(255,0,0) << box(width,height) << move_to(215, 200) << color(0,0,0) << text("Vesztettel");
#define kilep gout << move_to(175,225) << color(0,0,0) << box(160,60) << move_to(225, 250) << color(255,255,60) << text("Kilepes");

int main()
{
    gout.open(width,height);
    event ev;
    vector<Widget*> w;
    vector<vector<int> > sudokuvector;
    for(int i=0; i<9; i++)
    {
        vector<int> temp;
        for(int j=0; j<9; j++)
        {
            int t = 0;
            temp.push_back(t);
        }
        sudokuvector.push_back(temp);
    }

    jatekmester *jame = new jatekmester;

///konnyu
    Label * b11 = new Label(50,50,40,40);
    w.push_back(b11);
    LabelBox * b12 = new LabelBox(95,50,40,40,'5');
    w.push_back(b12);
    Label * b13 = new Label(140,50,40,40);
    w.push_back(b13);
    Label * b14 = new Label(190,50,40,40);
    w.push_back(b14);
    Label * b15 = new Label(235,50,40,40);
    w.push_back(b15);
    Label * b16 = new Label(280,50,40,40);
    w.push_back(b16);
    LabelBox * b17 = new LabelBox(330,50,40,40,'4');
    w.push_back(b17);
    LabelBox * b18 = new LabelBox(375,50,40,40,'1');
    w.push_back(b18);
    LabelBox * b19 = new LabelBox(420,50,40,40,'3');
    w.push_back(b19);

    LabelBox * b21 = new LabelBox(50,95,40,40,'2');
    w.push_back(b21);
    LabelBox * b22 = new LabelBox(95,95,40,40,'3');
    w.push_back(b22);
    Label * b23 = new Label(140,95,40,40);
    w.push_back(b23);
    Label * b24 = new Label(190,95,40,40);
    w.push_back(b24);
    Label * b25 = new Label(235,95,40,40);
    w.push_back(b25);
    Label * b26 = new Label(280,95,40,40);
    w.push_back(b26);
    Label * b27 = new Label(330,95,40,40);
    w.push_back(b27);
    LabelBox * b28 = new LabelBox(375,95,40,40,'8');
    w.push_back(b28);
    LabelBox * b29 = new LabelBox(420,95,40,40,'9');
    w.push_back(b29);

    LabelBox * b31 = new LabelBox(50,140,40,40,'1');
    w.push_back(b31);
    LabelBox * b32 = new LabelBox(95,140,40,40,'9');
    w.push_back(b32);
    LabelBox * b33 = new LabelBox(140,140,40,40,'4');
    w.push_back(b33);
    Label * b34 = new Label(190,140,40,40);
    w.push_back(b34);
    Label * b35 = new Label(235,140,40,40);
    w.push_back(b35);
    Label * b36 = new Label(280,140,40,40);
    w.push_back(b36);
    LabelBox * b37 = new LabelBox(330,140,40,40,'7');
    w.push_back(b37);
    Label * b38 = new Label(375,140,40,40);
    w.push_back(b38);
    LabelBox * b39 = new LabelBox(420,140,40,40,'6');
    w.push_back(b39);

    Label * b41 = new Label(50,190,40,40);
    w.push_back(b41);
    LabelBox * b42 = new LabelBox(95,190,40,40,'7');
    w.push_back(b42);
    Label * b43 = new Label(140,190,40,40);
    w.push_back(b43);
    LabelBox * b44 = new LabelBox(190,190,40,40,'2');
    w.push_back(b44);
    LabelBox * b45 = new LabelBox(235,190,40,40,'5');
    w.push_back(b45);
    Label * b46 = new Label(280,190,40,40);
    w.push_back(b46);
    Label * b47 = new Label(330,190,40,40);
    w.push_back(b47);
    Label * b48 = new Label(375,190,40,40);
    w.push_back(b48);
    Label * b49 = new Label(420,190,40,40);
    w.push_back(b49);

    Label * b51 = new Label(50,235,40,40);
    w.push_back(b51);
    Label * b52 = new Label(95,235,40,40);
    w.push_back(b52);
    LabelBox * b53 = new LabelBox(140,235,40,40,'8');
    w.push_back(b53);
    LabelBox * b54 = new LabelBox(190,235,40,40,'9');
    w.push_back(b54);
    Label * b55 = new Label(235,235,40,40);
    w.push_back(b55);
    LabelBox * b56 = new LabelBox(280,235,40,40,'3');
    w.push_back(b56);
    Label * b57 = new Label(330,235,40,40);
    w.push_back(b57);
    Label * b58 = new Label(375,235,40,40);
    w.push_back(b58);
    Label * b59 = new Label(420,235,40,40);
    w.push_back(b59);

    LabelBox * b61 = new LabelBox(50,280,40,40,'6');
    w.push_back(b61);
    Label * b62 = new Label(95,280,40,40);
    w.push_back(b62);
    LabelBox * b63 = new LabelBox(140,280,40,40,'3');
    w.push_back(b63);
    Label * b64 = new Label(190,280,40,40);
    w.push_back(b64);
    LabelBox * b65 = new LabelBox(235,280,40,40,'4');
    w.push_back(b65);
    LabelBox * b66 = new LabelBox(280,280,40,40,'1');
    w.push_back(b66);
    Label * b67 = new Label(330,280,40,40);
    w.push_back(b67);
    Label * b68 = new Label(375,280,40,40);
    w.push_back(b68);
    Label * b69 = new Label(420,280,40,40);
    w.push_back(b69);

    Label * b71 = new Label(50,330,40,40);
    w.push_back(b71);
    Label * b72 = new Label(95,330,40,40);
    w.push_back(b72);
    LabelBox * b73 = new LabelBox(140,330,40,40,'2');
    w.push_back(b73);
    LabelBox * b74 = new LabelBox(190,330,40,40,'5');
    w.push_back(b74);
    LabelBox * b75 = new LabelBox(235,330,40,40,'9');
    w.push_back(b75);
    Label * b76 = new Label(280,330,40,40);
    w.push_back(b76);
    LabelBox * b77 = new LabelBox(330,330,40,40,'6');
    w.push_back(b77);
    Label * b78 = new Label(375,330,40,40);
    w.push_back(b78);
    Label * b79 = new Label(420,330,40,40);
    w.push_back(b79);

    LabelBox * b81 = new LabelBox(50,375,40,40,'4');
    w.push_back(b81);
    Label * b82 = new Label(95,375,40,40);
    w.push_back(b82);
    Label * b83 = new Label(140,375,40,40);
    w.push_back(b83);
    Label * b84 = new Label(190,375,40,40);
    w.push_back(b84);
    Label * b85 = new Label(235,375,40,40);
    w.push_back(b85);
    LabelBox * b86 = new LabelBox(280,375,40,40,'8');
    w.push_back(b86);
    LabelBox * b87 = new LabelBox(330,375,40,40,'2');
    w.push_back(b87);
    LabelBox * b88 = new LabelBox(375,375,40,40,'5');
    w.push_back(b88);
    LabelBox * b89 = new LabelBox(420,375,40,40,'7');
    w.push_back(b89);

    Label * b91 = new Label(50,420,40,40);
    w.push_back(b91);
    LabelBox * b92 = new LabelBox(95,420,40,40,'1');
    w.push_back(b92);
    Label * b93 = new Label(140,420,40,40);
    w.push_back(b93);
    LabelBox * b94 = new LabelBox(190,420,40,40,'7');
    w.push_back(b94);
    Label * b95 = new Label(235,420,40,40);
    w.push_back(b95);
    Label * b96 = new Label(280,420,40,40);
    w.push_back(b96);
    LabelBox * b97 = new LabelBox(330,420,40,40,'8');
    w.push_back(b97);
    Label * b98 = new Label(375,420,40,40);
    w.push_back(b98);
    Label * b99 = new Label(420,420,40,40);
    w.push_back(b99);

///kozepes
    LabelBox * b111 = new LabelBox(50,50,40,40,'9');
    w.push_back(b111);
    LabelBox * b112 = new LabelBox(95,50,40,40,'3');
    w.push_back(b112);
    LabelBox * b113 = new LabelBox(140,50,40,40,'2');
    w.push_back(b113);
    Label * b114 = new Label(190,50,40,40);
    w.push_back(b114);
    Label * b115 = new Label(235,50,40,40);
    w.push_back(b115);
    Label * b116 = new Label(280,50,40,40);
    w.push_back(b116);
    Label * b117 = new Label(330,50,40,40);
    w.push_back(b117);
    LabelBox * b118 = new LabelBox(375,50,40,40,'1');
    w.push_back(b118);
    Label * b119 = new Label(420,50,40,40);
    w.push_back(b119);

    LabelBox * b121 = new LabelBox(50,95,40,40,'8');
    w.push_back(b121);
    Label * b122 = new Label(95,95,40,40);
    w.push_back(b122);
    Label * b123 = new Label(140,95,40,40);
    w.push_back(b123);
    Label * b124 = new Label(190,95,40,40);
    w.push_back(b124);
    LabelBox * b125 = new LabelBox(235,95,40,40,'3');
    w.push_back(b125);
    Label * b126 = new Label(280,95,40,40);
    w.push_back(b126);
    Label * b127 = new Label(330,95,40,40);
    w.push_back(b127);
    Label * b128 = new Label(375,95,40,40);
    w.push_back(b128);
    LabelBox * b129 = new LabelBox(420,95,40,40,'7');
    w.push_back(b129);

    LabelBox * b131 = new LabelBox(50,140,40,40,'5');
    w.push_back(b131);
    Label * b132 = new Label(95,140,40,40);
    w.push_back(b132);
    LabelBox * b133 = new LabelBox(140,140,40,40,'6');
    w.push_back(b133);
    Label * b134 = new Label(190,140,40,40);
    w.push_back(b134);
    Label * b135 = new Label(235,140,40,40);
    w.push_back(b135);
    LabelBox * b136 = new LabelBox(280,140,40,40,'1');
    w.push_back(b136);
    LabelBox * b137 = new LabelBox(330,140,40,40,'9');
    w.push_back(b137);
    Label * b138 = new Label(375,140,40,40);
    w.push_back(b138);
    Label * b139 = new Label(420,140,40,40);
    w.push_back(b139);

    Label * b141 = new Label(50,190,40,40);
    w.push_back(b141);
    Label * b142 = new Label(95,190,40,40);
    w.push_back(b142);
    Label * b143 = new Label(140,190,40,40);
    w.push_back(b143);
    LabelBox * b144 = new LabelBox(190,190,40,40,'5');
    w.push_back(b144);
    Label * b145 = new Label(235,190,40,40);
    w.push_back(b145);
    Label * b146 = new Label(280,190,40,40);
    w.push_back(b146);
    LabelBox * b147 = new LabelBox(330,190,40,40,'7');
    w.push_back(b147);
    Label * b148 = new Label(375,190,40,40);
    w.push_back(b148);
    Label * b149 = new Label(420,190,40,40);
    w.push_back(b149);

    Label * b151 = new Label(50,235,40,40);
    w.push_back(b151);
    LabelBox * b152 = new LabelBox(95,235,40,40,'1');
    w.push_back(b152);
    Label * b153 = new Label(140,235,40,40);
    w.push_back(b153);
    Label * b154 = new Label(190,235,40,40);
    w.push_back(b154);
    Label * b155 = new Label(235,235,40,40);
    w.push_back(b155);
    Label * b156 = new Label(280,235,40,40);
    w.push_back(b156);
    Label * b157 = new Label(330,235,40,40);
    w.push_back(b157);
    LabelBox * b158 = new LabelBox(375,235,40,40,'4');
    w.push_back(b158);
    Label * b159 = new Label(420,235,40,40);
    w.push_back(b159);

    Label * b161 = new Label(50,280,40,40);
    w.push_back(b161);
    Label * b162 = new Label(95,280,40,40);
    w.push_back(b162);
    LabelBox * b163 = new LabelBox(140,280,40,40,'5');
    w.push_back(b163);
    Label * b164 = new Label(190,280,40,40);
    w.push_back(b164);
    Label * b165 = new Label(235,280,40,40);
    w.push_back(b165);
    LabelBox * b166 = new LabelBox(280,280,40,40,'9');
    w.push_back(b166);
    Label * b167 = new Label(330,280,40,40);
    w.push_back(b167);
    Label * b168 = new Label(375,280,40,40);
    w.push_back(b168);
    Label * b169 = new Label(420,280,40,40);
    w.push_back(b169);

    Label * b171 = new Label(50,330,40,40);
    w.push_back(b171);
    Label * b172 = new Label(95,330,40,40);
    w.push_back(b172);
    LabelBox * b173 = new LabelBox(140,330,40,40,'4');
    w.push_back(b173);
    LabelBox * b174 = new LabelBox(190,330,40,40,'3');
    w.push_back(b174);
    Label * b175 = new Label(235,330,40,40);
    w.push_back(b175);
    Label * b176 = new Label(280,330,40,40);
    w.push_back(b176);
    LabelBox * b177 = new LabelBox(330,330,40,40,'2');
    w.push_back(b177);
    Label * b178 = new Label(375,330,40,40);
    w.push_back(b178);
    LabelBox * b179 = new LabelBox(420,330,40,40,'9');
    w.push_back(b179);

    LabelBox * b181 = new LabelBox(50,375,40,40,'1');
    w.push_back(b181);
    Label * b182 = new Label(95,375,40,40);
    w.push_back(b182);
    Label * b183 = new Label(140,375,40,40);
    w.push_back(b183);
    Label * b184 = new Label(190,375,40,40);
    w.push_back(b184);
    LabelBox * b185 = new LabelBox(235,375,40,40,'6');
    w.push_back(b185);
    Label * b186 = new Label(280,375,40,40);
    w.push_back(b186);
    Label * b187 = new Label(330,375,40,40);
    w.push_back(b187);
    Label * b188 = new Label(375,375,40,40);
    w.push_back(b188);
    LabelBox * b189 = new LabelBox(420,375,40,40,'3');
    w.push_back(b189);

    Label * b191 = new Label(50,420,40,40);
    w.push_back(b191);
    LabelBox * b192 = new LabelBox(95,420,40,40,'5');
    w.push_back(b192);
    Label * b193 = new Label(140,420,40,40);
    w.push_back(b193);
    Label * b194 = new Label(190,420,40,40);
    w.push_back(b194);
    Label * b195 = new Label(235,420,40,40);
    w.push_back(b195);
    Label * b196 = new Label(280,420,40,40);
    w.push_back(b196);
    LabelBox * b197 = new LabelBox(330,420,40,40,'1');
    w.push_back(b197);
    LabelBox * b198 = new LabelBox(375,420,40,40,'8');
    w.push_back(b198);
    LabelBox * b199 = new LabelBox(420,420,40,40,'6');
    w.push_back(b199);

///nehez
    Label * b211 = new Label(50,50,40,40);
    w.push_back(b211);
    Label * b212 = new Label(95,50,40,40);
    w.push_back(b212);
    LabelBox * b213 = new LabelBox(140,50,40,40,'4');
    w.push_back(b213);
    Label * b214 = new Label(190,50,40,40);
    w.push_back(b214);
    Label * b215 = new Label(235,50,40,40);
    w.push_back(b215);
    Label * b216 = new Label(280,50,40,40);
    w.push_back(b216);
    Label * b217 = new Label(330,50,40,40);
    w.push_back(b217);
    LabelBox * b218 = new LabelBox(375,50,40,40,'2');
    w.push_back(b218);
    Label * b219 = new Label(420,50,40,40);
    w.push_back(b219);

    Label * b221 = new Label(50,95,40,40);
    w.push_back(b221);
    LabelBox * b222 = new LabelBox(95,95,40,40,'9');
    w.push_back(b222);
    Label * b223 = new Label(140,95,40,40);
    w.push_back(b223);
    Label * b224 = new Label(190,95,40,40);
    w.push_back(b224);
    LabelBox * b225 = new LabelBox(235,95,40,40,'2');
    w.push_back(b225);
    Label * b226 = new Label(280,95,40,40);
    w.push_back(b226);
    Label * b227 = new Label(330,95,40,40);
    w.push_back(b227);
    Label * b228 = new Label(375,95,40,40);
    w.push_back(b228);
    Label * b229 = new Label(420,95,40,40);
    w.push_back(b229);

    LabelBox * b231 = new LabelBox(50,140,40,40,'5');
    w.push_back(b231);
    LabelBox * b232 = new LabelBox(95,140,40,40,'3');
    w.push_back(b232);
    Label * b233 = new Label(140,140,40,40);
    w.push_back(b233);
    LabelBox * b234 = new LabelBox(190,140,40,40,'1');
    w.push_back(b234);
    Label * b235 = new Label(235,140,40,40);
    w.push_back(b235);
    LabelBox * b236 = new LabelBox(280,140,40,40,'6');
    w.push_back(b236);
    Label * b237 = new Label(330,140,40,40);
    w.push_back(b237);
    Label * b238 = new Label(375,140,40,40);
    w.push_back(b238);
    Label * b239 = new Label(420,140,40,40);
    w.push_back(b239);

    LabelBox * b241 = new LabelBox(50,190,40,40,'4');
    w.push_back(b241);
    LabelBox * b242 = new LabelBox(95,190,40,40,'2');
    w.push_back(b242);
    Label * b243 = new Label(140,190,40,40);
    w.push_back(b243);
    LabelBox * b244 = new LabelBox(190,190,40,40,'9');
    w.push_back(b244);
    LabelBox * b245 = new LabelBox(235,190,40,40,'6');
    w.push_back(b245);
    Label * b246 = new Label(280,190,40,40);
    w.push_back(b246);
    Label * b247 = new Label(330,190,40,40);
    w.push_back(b247);
    Label * b248 = new Label(375,190,40,40);
    w.push_back(b248);
    LabelBox * b249 = new LabelBox(420,190,40,40,'1');
    w.push_back(b249);

    Label * b251 = new Label(50,235,40,40);
    w.push_back(b251);
    Label * b252 = new Label(95,235,40,40);
    w.push_back(b252);
    Label * b253 = new Label(140,235,40,40);
    w.push_back(b253);
    Label * b254 = new Label(190,235,40,40);
    w.push_back(b254);
    Label * b255 = new Label(235,235,40,40);
    w.push_back(b255);
    Label * b256 = new Label(280,235,40,40);
    w.push_back(b256);
    Label * b257 = new Label(330,235,40,40);
    w.push_back(b257);
    Label * b258 = new Label(375,235,40,40);
    w.push_back(b258);
    Label * b259 = new Label(420,235,40,40);
    w.push_back(b259);

    LabelBox * b261 = new LabelBox(50,280,40,40,'1');
    w.push_back(b261);
    Label * b262 = new Label(95,280,40,40);
    w.push_back(b262);
    Label * b263 = new Label(140,280,40,40);
    w.push_back(b263);
    Label * b264 = new Label(190,280,40,40);
    w.push_back(b264);
    LabelBox * b265 = new LabelBox(235,280,40,40,'4');
    w.push_back(b265);
    LabelBox * b266 = new LabelBox(280,280,40,40,'7');
    w.push_back(b266);
    Label * b267 = new Label(330,280,40,40);
    w.push_back(b267);
    LabelBox * b268 = new LabelBox(375,280,40,40,'9');
    w.push_back(b268);
    LabelBox * b269 = new LabelBox(420,280,40,40,'3');
    w.push_back(b269);

    Label * b271 = new Label(50,330,40,40);
    w.push_back(b271);
    Label * b272 = new Label(95,330,40,40);
    w.push_back(b272);
    Label * b273 = new Label(140,330,40,40);
    w.push_back(b273);
    LabelBox * b274 = new LabelBox(190,330,40,40,'5');
    w.push_back(b274);
    Label * b275 = new Label(235,330,40,40);
    w.push_back(b275);
    LabelBox * b276 = new LabelBox(280,330,40,40,'1');
    w.push_back(b276);
    Label * b277 = new Label(330,330,40,40);
    w.push_back(b277);
    LabelBox * b278 = new LabelBox(375,330,40,40,'8');
    w.push_back(b278);
    LabelBox * b279 = new LabelBox(420,330,40,40,'6');
    w.push_back(b279);

    Label * b281 = new Label(50,375,40,40);
    w.push_back(b281);
    Label * b282 = new Label(95,375,40,40);
    w.push_back(b282);
    Label * b283 = new Label(140,375,40,40);
    w.push_back(b283);
    Label * b284 = new Label(190,375,40,40);
    w.push_back(b284);
    LabelBox * b285 = new LabelBox(235,375,40,40,'8');
    w.push_back(b285);
    Label * b286 = new Label(280,375,40,40);
    w.push_back(b286);
    Label * b287 = new Label(330,375,40,40);
    w.push_back(b287);
    LabelBox * b288 = new LabelBox(375,375,40,40,'3');
    w.push_back(b288);
    Label * b289 = new Label(420,375,40,40);
    w.push_back(b289);

    Label * b291 = new Label(50,420,40,40);
    w.push_back(b291);
    LabelBox * b292 = new LabelBox(95,420,40,40,'6');
    w.push_back(b292);
    Label * b293 = new Label(140,420,40,40);
    w.push_back(b293);
    Label * b294 = new Label(190,420,40,40);
    w.push_back(b294);
    Label * b295 = new Label(235,420,40,40);
    w.push_back(b295);
    Label * b296 = new Label(280,420,40,40);
    w.push_back(b296);
    LabelBox * b297 = new LabelBox(330,420,40,40,'7');
    w.push_back(b297);
    Label * b298 = new Label(375,420,40,40);
    w.push_back(b298);
    Label * b299 = new Label(420,420,40,40);
    w.push_back(b299);

    int focus = -1;
    int indulas = 0;
    bool kilepes = false;

    while(gin>>ev && indulas==0 && ev.keycode != key_escape)
    {
        gout << move_to(0,0) << color(200,180,120) << box(width,height) << color(0,0,0) << move_to(40, 100) << text("Kattints a megfelelo nehezsegi szintre az inditashoz");
        gout << move_to(100, 200) << color(0,200,0) << box(20,20) << color(0,0,0) << move_to(130, 215) << text("Konnyu");
        gout << move_to(100, 250) << color(0,200,0) << box(20,20) << color(0,0,0) << move_to(130, 265) << text("Kozepes");
        gout << move_to(100, 300) << color(0,200,0) << box(20,20) << color(0,0,0) << move_to(130, 315) << text("Nehez");
        if(ev.button==btn_left && ev.pos_x>=100 && ev.pos_x<=120 && ev.pos_y>=200 && ev.pos_y<=220)
        {
            indulas=1;
        }
        if(ev.button==btn_left && ev.pos_x>=100 && ev.pos_x<=120 && ev.pos_y>=250 && ev.pos_y<=270)
        {
            indulas=2;
        }
        if(ev.button==btn_left && ev.pos_x>=100 && ev.pos_x<=120 && ev.pos_y>=300 && ev.pos_y<=320)
        {
            indulas=3;
        }
        gout << refresh;
    }

    while(gin >> ev && ev.keycode != key_escape && indulas==1)
    {
        gout << move_to(0,0) << color(219,252,130) << box(width,height);
        gout << move_to(235, 30) << color(0,0,0) << text("Konnyu");
        ellenorzes;
        if( ev.type == ev_mouse && ev.button==btn_left )
        {
            focus = -1;
            for( size_t i=0; i<81; i++ )
            {
                if( w[i]->is_selected(ev.pos_x, ev.pos_y) )
                {
                    focus = i;
                }
            }
            cout << "The active widget: " << focus << endl;
        }
        if( focus!=-1 )
        {
            w[focus]->handle(ev);
        }
        for( size_t i=0; i<81; i++ )
        {
            w[i]->draw();
            sudokuvector[i/9][i%9] = w[i] -> getvalue();
        }
        if(ev.button == btn_left && ev.pos_x>=400 && ev.pos_x<=500 && ev.pos_y>=470 && ev.pos_y<=500)
        {
            jame -> loadvector(sudokuvector, "kezdo.txt");
            for( size_t i=0; i<81; i++ )
            {
                w[i] -> setvalue(sudokuvector[i/9][i%9]);
            }
        }
        jame -> setvector(sudokuvector);
        if(jame -> gyozelem(sudokuvector, "kezdo.txt"))
        {
            kilepes = true;
        }
        if(kilepes)
        {
            nyert;
            kilep;
            if(ev.pos_x>=175 && ev.pos_x<=335 && ev.pos_y>=225 && ev.pos_y<=285)
            {
                if(ev.button==btn_left)
                {
                    return 0;
                }
            }
        }
        gout << refresh;
    }

    while(gin >> ev && ev.keycode != key_escape && indulas==2)
    {
        gout << move_to(0,0) << color(158,196,226) << box(width,height);
        gout << move_to(230,30) << color(0,0,0) << text("Kozepes");
        ellenorzes;
        if( ev.type == ev_mouse && ev.button==btn_left )
        {
            focus = -1;
            for( size_t i=81; i<162; i++ )
            {
                if( w[i]->is_selected(ev.pos_x, ev.pos_y) )
                {
                    focus = i;
                }
            }
            cout << "The active widget: " << focus << endl;
        }
        if( focus!=-1 )
        {
            w[focus]->handle(ev);
        }
        for( size_t i=81; i<162; i++ )
        {
            w[i]->draw();
            sudokuvector[(i-81)/9][(i-81)%9] = w[i] -> getvalue();
        }

        if(ev.button == btn_left && ev.pos_x>=400 && ev.pos_x<=500 && ev.pos_y>=470 && ev.pos_y<=500)
        {
            jame -> loadvector(sudokuvector, "kozepes.txt");
            for( size_t i=81; i<162; i++ )
            {
                w[i] -> setvalue(sudokuvector[(i-81)/9][(i-81)%9]);
            }
        }

        jame -> setvector(sudokuvector);
        if(jame -> gyozelem(sudokuvector, "kozepes.txt"))
        {
            kilepes = true;
        }
        if(kilepes)
        {
            nyert;
            kilep;
            if(ev.pos_x>=175 && ev.pos_x<=335 && ev.pos_y>=225 && ev.pos_y<=285)
            {
                if(ev.button==btn_left)
                {
                    return 0;
                }
            }
        }
        gout << refresh;
    }

    while(gin >> ev && ev.keycode != key_escape && indulas==3)
    {
        gout << move_to(0,0) << color(0,180,120) << box(width,height);
        gout << move_to(235, 30) << color(0,0,0) << text("Nehez");
        ellenorzes;
        if( ev.type == ev_mouse && ev.button==btn_left )
        {
            focus = -1;
            for( size_t i=162; i<243; i++ )
            {
                if( w[i]->is_selected(ev.pos_x, ev.pos_y) )
                {
                    focus = i;
                }
            }
            cout << "The active widget: " << focus << endl;
        }
        if( focus!=-1 )
        {
            w[focus]->handle(ev);
        }
        for( size_t i=162; i<243; i++ )
        {
            w[i]->draw();
            sudokuvector[(i-162)/9][(i-162)%9] = w[i] -> getvalue();
        }

        if(ev.button == btn_left && ev.pos_x>=400 && ev.pos_x<=500 && ev.pos_y>=470 && ev.pos_y<=500)
        {
            jame -> loadvector(sudokuvector, "nehez.txt");
            for( size_t i=162; i<243; i++ )
            {
                w[i] -> setvalue(sudokuvector[(i-162)/9][(i-162)%9]);
            }
        }
        jame -> setvector(sudokuvector);
        if(jame -> gyozelem(sudokuvector, "nehez.txt"))
        {
            kilepes = true;
        }
        if(kilepes)
        {
            veszt;
            kilep;
            if(ev.pos_x>=175 && ev.pos_x<=335 && ev.pos_y>=225 && ev.pos_y<=285)
            {
                if(ev.button==btn_left)
                {
                    return 0;
                }
            }
        }

        gout << refresh;
    }
    return 0;
}

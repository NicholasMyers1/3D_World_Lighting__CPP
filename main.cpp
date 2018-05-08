#include <math.h>
#include <windows.h>
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include <cstring>
#include <fstream>
#include <GL/glew.h>
#include <gl\gl.h>
#include <gl\glext.h>
#include <gl\glaux.h>
#include <gl\glu.h>
#include <gl\glut.h>
#include <assert.h>
#include <sstream>
#include <iomanip>
#include <ctime>
#include <cstring>
#include <cmath>
#include <fstream>
#include <time.h>
#include <string.h>
#include <string>
#include <cstdlib>
#include <cstdio>
#include <gl\glfw.h>
#include <vector>
#include <conio.h>
#define PI 3.1415926535897932384626433832795028841971693993751058209749445923078164062862089986280348253421170679
using namespace std;bool keystates[256];double lefta,upb,downb,sunm;//direction.
GLuint sun1=1,moon1=2;
static double lightposx=0,lightposy=0,lightposz=-90;
double c1,c2,c3,c4;static float poss[]={1,1,1,1};//lightpos
static int mousex,mousey;int xprev=mousex/2;int yprev=mousey/2;
double rota,rotb,rotx,roty;bool mstate=false;
static bool xp1=false,xn1=false,yp1=false,yn1=false;//rotb1=false,rotb2=false,rotb3=false,rotb4=false;
/////////////////////////////////////////////////////ints...
double milliseconds,seconds,minutes,hours,days,months,years,decades,centurys;
GLuint xloop,yloop,zloop;

//gravity;

void mouseclick(int button,int state,int x,int y){
if(button==GLUT_LEFT_BUTTON){mstate=true;}

;}

void mousemove(int x, int y){
if (mstate==true){
xprev=mousex/2;yprev=mousey/2;
//if (x>xprev||x<xprev||y>yprev||y<yprev){glutWarpPointer(mousex/2,mousey/2);}//+2,-2,+2,-2;in order;
if (x>=xprev&&y>yprev-3&&y<yprev+3){xp1=true;}//rotb+=5;roty+=rotb;}//+2,-3,+3;3,3;
if (x<=xprev&&y>yprev-3&&y<yprev+3){xn1=true;}//rotb-=5;roty+=rotb;}//-2,-3,+3;3,3;
if (y<=yprev&&x>xprev-3&&x<xprev+3){yn1=true;}//rota+=1;rotx+=rota;}//-2,-3,+3;3,3;
if (y>=yprev&&x>xprev-3&&x<xprev+3){yp1=true;}//rota-=1;rotx+=rota;}//+2,-3,+3;3,3;
;;}

//cout<<"\nx: "<<x<<"\nxprev: "<<xprev<<"\n"<<"y: "<<y<<"\nyprev: "<<yprev;system("CLS");
;}

void Skeys (int key, int x, int y){//switch (key){
//if (anglemovex<=0){anglemovex=360;}
if(key==GLUT_KEY_LEFT&&rotb==0||key==GLUT_KEY_LEFT&&rotb==360){lefta+=1.5;glutPostRedisplay();}
if(key==GLUT_KEY_RIGHT&&rotb==0||key==GLUT_KEY_RIGHT&&rotb==360){lefta-=1.5;glutPostRedisplay();}
if(key==GLUT_KEY_UP&&rotb==0||key==GLUT_KEY_UP&&rotb==360){downb+=1.5;glutPostRedisplay();}
if(key==GLUT_KEY_DOWN&&rotb==0||key==GLUT_KEY_DOWN&&rotb==360){downb-=1.5;glutPostRedisplay();}

cout<<rotb;
if(rotb>=0&&rotb<90){
if(key==GLUT_KEY_LEFT){lefta+=1.5;glutPostRedisplay();}//no gprd anglemovex+=lefta;
if(key==GLUT_KEY_RIGHT){lefta-=1.5;glutPostRedisplay();}//anglemovex-=lefta;
if(key==GLUT_KEY_UP){downb+=1.5;glutPostRedisplay();}//
if(key==GLUT_KEY_DOWN){downb-=1.5;glutPostRedisplay();}//
}
if(rotb>=90&&rotb<180){
if(key==GLUT_KEY_LEFT){downb+=1.5;glutPostRedisplay();}//no gprd anglemovex+=lefta;
if(key==GLUT_KEY_RIGHT){downb-=1.5;glutPostRedisplay();}//anglemovex-=lefta;
if(key==GLUT_KEY_UP){lefta-=1.5;glutPostRedisplay();}//
if(key==GLUT_KEY_DOWN){lefta+=1.5;glutPostRedisplay();}//
}
if(rotb>=180&&rotb<270){
if(key==GLUT_KEY_LEFT){lefta+=1.5;glutPostRedisplay();}//no gprd anglemovex+=lefta;
if(key==GLUT_KEY_RIGHT){lefta-=1.5;glutPostRedisplay();}//anglemovex-=lefta;
if(key==GLUT_KEY_UP){downb-=1.5;glutPostRedisplay();}//
if(key==GLUT_KEY_DOWN){downb+=1.5;glutPostRedisplay();}//
}
if(rotb>=270&&rotb<360){
if(key==GLUT_KEY_LEFT){downb-=1.5;glutPostRedisplay();}//no gprd anglemovex+=lefta;
if(key==GLUT_KEY_RIGHT){downb+=1.5;glutPostRedisplay();}//anglemovex-=lefta;
if(key==GLUT_KEY_UP){lefta+=1.5;glutPostRedisplay();}//
if(key==GLUT_KEY_DOWN){lefta-=1.5;glutPostRedisplay();}//
}
//;}//end switch;
;;}

void keyup (unsigned char key, int x, int y){glutKeyboardUpFunc(keyup);
;}
void keyPressed (unsigned char key, int x, int y){glutKeyboardFunc(keyPressed);//GLUT_ACTIVE_SHIFT GLUT_ACTIVE_CTRL GLUT_ACTIVE_ALT;
int mod=glutGetModifiers();
if (key==32){
if (mod!=GLUT_ACTIVE_SHIFT){upb-=.1;}
if (mod==GLUT_ACTIVE_SHIFT){upb+=.1;}//if (key=='c'){upb+=.1;}
;}
if (key=='f'){sunm+=1;}
if (key=='g'){sunm-=1;}
if (key==27){mstate=false;}
;}



void BuildList(){
{glGenLists(sun1);glNewList(sun1,GL_COMPILE);
glBegin(GL_QUADS);glColor3f(1,1,0);
			// Bottom Face
			glNormal3f( 0.0f,-10.0f, 0.0f);
			glTexCoord2f(1.0f, 1.0f); glVertex3f(-1.0f/2, -1.0f/2, -1.0f/2);
			glTexCoord2f(0.0f, 1.0f); glVertex3f( 1.0f/2, -1.0f/2, -1.0f/2);
			glTexCoord2f(0.0f, 0.0f); glVertex3f( 1.0f/2, -1.0f/2,  1.0f/2);
			glTexCoord2f(1.0f, 0.0f); glVertex3f(-1.0f/2, -1.0f/2,  1.0f/2);
			// Front Face
			glNormal3f( 0.0f, 0.0f, 10.0f);
			glTexCoord2f(0.0f, 0.0f); glVertex3f(-1.0f/2, -1.0f/2,  1.0f/2);
			glTexCoord2f(1.0f, 0.0f); glVertex3f( 1.0f/2, -1.0f/2,  1.0f/2);
			glTexCoord2f(1.0f, 1.0f); glVertex3f( 1.0f/2,  1.0f/2,  1.0f/2);
			glTexCoord2f(0.0f, 1.0f); glVertex3f(-1.0f/2,  1.0f/2,  1.0f/2);
			// Back Face
			glNormal3f( 0.0f, 0.0f,-10.0f);
			glTexCoord2f(1.0f, 0.0f); glVertex3f(-1.0f/2, -1.0f/2, -1.0f/2);
			glTexCoord2f(1.0f, 1.0f); glVertex3f(-1.0f/2,  1.0f/2, -1.0f/2);
			glTexCoord2f(0.0f, 1.0f); glVertex3f( 1.0f/2,  1.0f/2, -1.0f/2);
			glTexCoord2f(0.0f, 0.0f); glVertex3f( 1.0f/2, -1.0f/2, -1.0f/2);
			// Right face
			glNormal3f( 10.0f, 0.0f, 0.0f);
			glTexCoord2f(1.0f, 0.0f); glVertex3f( 1.0f/2, -1.0f/2, -1.0f/2);
			glTexCoord2f(1.0f, 1.0f); glVertex3f( 1.0f/2,  1.0f/2, -1.0f/2);
			glTexCoord2f(0.0f, 1.0f); glVertex3f( 1.0f/2,  1.0f/2,  1.0f/2);
			glTexCoord2f(0.0f, 0.0f); glVertex3f( 1.0f/2, -1.0f/2,  1.0f/2);
			// Left Face
			glNormal3f(-10.0f, 0.0f, 0.0f);
			glTexCoord2f(0.0f, 0.0f); glVertex3f(-1.0f/2, -1.0f/2, -1.0f/2);
			glTexCoord2f(1.0f, 0.0f); glVertex3f(-1.0f/2, -1.0f/2,  1.0f/2);
			glTexCoord2f(1.0f, 1.0f); glVertex3f(-1.0f/2,  1.0f/2,  1.0f/2);
			glTexCoord2f(0.0f, 1.0f); glVertex3f(-1.0f/2,  1.0f/2, -1.0f/2);
			// Top Face
			glNormal3f( 0.0f, 10.0f, 0.0f);
			glTexCoord2f(0.0f, 1.0f); glVertex3f(-1.0f/2,  1.0f/2, -1.0f/2);
			glTexCoord2f(0.0f, 0.0f); glVertex3f(-1.0f/2,  1.0f/2,  1.0f/2);
			glTexCoord2f(1.0f, 0.0f); glVertex3f( 1.0f/2,  1.0f/2,  1.0f/2);
			glTexCoord2f(1.0f, 1.0f); glVertex3f( 1.0f/2,  1.0f/2, -1.0f/2);
		glEnd();glEndList();
;}
{glGenLists(moon1);glNewList(moon1,GL_COMPILE);
glBegin(GL_QUADS);glColor3f(1,1,1);
			// Bottom Face
			glNormal3f( 0.0f,-10.0f, 0.0f);
			glTexCoord2f(1.0f, 1.0f); glVertex3f(-1.0f/2, -1.0f/2, -1.0f/2);
			glTexCoord2f(0.0f, 1.0f); glVertex3f( 1.0f/2, -1.0f/2, -1.0f/2);
			glTexCoord2f(0.0f, 0.0f); glVertex3f( 1.0f/2, -1.0f/2,  1.0f/2);
			glTexCoord2f(1.0f, 0.0f); glVertex3f(-1.0f/2, -1.0f/2,  1.0f/2);
			// Front Face
			glNormal3f( 0.0f, 0.0f, 10.0f);
			glTexCoord2f(0.0f, 0.0f); glVertex3f(-1.0f/2, -1.0f/2,  1.0f/2);
			glTexCoord2f(1.0f, 0.0f); glVertex3f( 1.0f/2, -1.0f/2,  1.0f/2);
			glTexCoord2f(1.0f, 1.0f); glVertex3f( 1.0f/2,  1.0f/2,  1.0f/2);
			glTexCoord2f(0.0f, 1.0f); glVertex3f(-1.0f/2,  1.0f/2,  1.0f/2);
			// Back Face
			glNormal3f( 0.0f, 0.0f,-10.0f);
			glTexCoord2f(1.0f, 0.0f); glVertex3f(-1.0f/2, -1.0f/2, -1.0f/2);
			glTexCoord2f(1.0f, 1.0f); glVertex3f(-1.0f/2,  1.0f/2, -1.0f/2);
			glTexCoord2f(0.0f, 1.0f); glVertex3f( 1.0f/2,  1.0f/2, -1.0f/2);
			glTexCoord2f(0.0f, 0.0f); glVertex3f( 1.0f/2, -1.0f/2, -1.0f/2);
			// Right face
			glNormal3f( 10.0f, 0.0f, 0.0f);
			glTexCoord2f(1.0f, 0.0f); glVertex3f( 1.0f/2, -1.0f/2, -1.0f/2);
			glTexCoord2f(1.0f, 1.0f); glVertex3f( 1.0f/2,  1.0f/2, -1.0f/2);
			glTexCoord2f(0.0f, 1.0f); glVertex3f( 1.0f/2,  1.0f/2,  1.0f/2);
			glTexCoord2f(0.0f, 0.0f); glVertex3f( 1.0f/2, -1.0f/2,  1.0f/2);
			// Left Face
			glNormal3f(-10.0f, 0.0f, 0.0f);
			glTexCoord2f(0.0f, 0.0f); glVertex3f(-1.0f/2, -1.0f/2, -1.0f/2);
			glTexCoord2f(1.0f, 0.0f); glVertex3f(-1.0f/2, -1.0f/2,  1.0f/2);
			glTexCoord2f(1.0f, 1.0f); glVertex3f(-1.0f/2,  1.0f/2,  1.0f/2);
			glTexCoord2f(0.0f, 1.0f); glVertex3f(-1.0f/2,  1.0f/2, -1.0f/2);
			// Top Face
			glNormal3f( 0.0f, 10.0f, 0.0f);
			glTexCoord2f(0.0f, 1.0f); glVertex3f(-1.0f/2,  1.0f/2, -1.0f/2);
			glTexCoord2f(0.0f, 0.0f); glVertex3f(-1.0f/2,  1.0f/2,  1.0f/2);
			glTexCoord2f(1.0f, 0.0f); glVertex3f( 1.0f/2,  1.0f/2,  1.0f/2);
			glTexCoord2f(1.0f, 1.0f); glVertex3f( 1.0f/2,  1.0f/2, -1.0f/2);
		glEnd();glEndList();
;}
;}//end void;

void MOON(){glLoadIdentity();glRotatef(rotb,0,roty,0);//glRotatef(rota,rotx,0,0);
glRotatef(sunm,sunm,0,0);glTranslatef(0,0,90);glDisable(GL_LIGHTING);glLightfv(GL_LIGHT0,GL_EMISSION,poss);glLightf(GL_LIGHT0,GL_SHININESS ,128);
glCallList(moon1);
;}//end void;
void SUN(){glLoadIdentity();glRotatef(rotb,0,roty,0);//glRotatef(rota,rotx,0,0);
glRotatef(sunm,sunm,0,0);glTranslatef(0,0,-90);if (sunm>=360||sunm<=0){sunm=0;}//
glDisable(GL_LIGHTING);glLightfv(GL_LIGHT0,GL_EMISSION,poss);glLightf(GL_LIGHT0,GL_SHININESS ,128);
glCallList(sun1);glEnable(GL_LIGHTING);cout<<"sunm: "<<sunm;}
void nightday(){double lm;lm+=.01;sunm+=lm;
if(sunm<=157.5){c1=sunm/22.5;c2=sunm/22.5;c3=sunm/22.5;if (c1>1||c2>1||c3>1){c1=1;c2=1;c3=1;}}
if (sunm>=157.5&&sunm<=159.59090909090909090909090909091){c1=0.91;c2=0.91;c3=0.91;}//.09
if (sunm>=159.59090909090909090909090909091&&sunm<=161.68181818181818181818181818182){c1=.82;c2=.82;c3=.82;}
if (sunm>=161.68181818181818181818181818182&&sunm<=163.77272727272727272727272727273){c1=0.73;c2=0.73;c3=0.73;}
if (sunm>=163.77272727272727272727272727273&&sunm<=165.86363636363636363636363636364){c1=0.64;c2=0.64;c3=0.64;}
if (sunm>=165.86363636363636363636363636364&&sunm<=167.95454545454545454545454545455){c1=0.55;c2=0.55;c3=0.55;}
if (sunm>=167.95454545454545454545454545455&&sunm<=170.04545454545454545454545454546){c1=0.46;c2=0.46;c3=0.46;}
if (sunm>=170.04545454545454545454545454546&&sunm<=172.13636363636363636363636363637){c1=0.37;c2=0.37;c3=0.37;}
if (sunm>=172.13636363636363636363636363637&&sunm<=174.22727272727272727272727272728){c1=0.28;c2=0.28;c3=0.28;}
if (sunm>=174.22727272727272727272727272728&&sunm<=176.31818181818181818181818181819){c1=0.19;c2=0.19;c3=0.19;}
if (sunm>=176.31818181818181818181818181819&&sunm<=178.4090909090909090909090909091){c1=0.1;c2=0.1;c3=0.1;}
if (sunm>=178.4090909090909090909090909091&&sunm<=180){c1=0;c2=0;c3=0;}if (sunm>=180){c1=0,c2=0,c3=0;}
cout<<"\n"<<"lm: "<<lm<<"\nc1: "<<c1<<"\nc2: "<<c2<<"\nc3: "<<c3<<"::"<<sunm/22.5<<"\n";cout<<"\nsunm"<<sunm;system("CLS");
cout<<"\nrotb: "<<rotb<<"\n";}

void PLAYER(){glLoadIdentity();{glRotatef(rota,rotx,0,0);glTranslatef(0,-1,-4);}//glRotatef(rotb,0,roty,0);//change viewpointglRotatef(lefta,lefta,upb,downb);
//cout<<"\ntime1: "<<time1<<" acc: "<<acc<<" vel: "<<vel<<" pos: "<<pos<<"\n";
glCallList(sun1)
;}//test for shadows;

void WORLDMAIN(){
for (xloop=0;xloop<64;xloop++){
for (yloop=0;yloop<1;yloop++){
for (zloop=0;zloop<64;zloop++){
glLoadIdentity();glRotatef(rota,rotx,0,0);glRotatef(rotb,0,roty,0);glTranslatef(xloop,yloop,zloop);
glTranslatef(lefta,upb,downb);glTranslatef(0,-1,-20);//if grav=0 ++ for downb; or --;upb+=0 as well;
//lighting
float amb[]={c1,c2,c3,c4};glLightfv(GL_LIGHT0,GL_AMBIENT,amb);glLightfv(GL_LIGHT0,GL_DIFFUSE,poss);
glCallList(moon1);;};};}
;;}

void display (void) {glLoadIdentity();
time_t timea;struct tm * timeinfo;time ( &timea );timeinfo = localtime ( &timea );Sleep(1);//seconds=timeinfo->tm_sec;
if (mstate==true){glutSetCursor(GLUT_CURSOR_NONE);glutWarpPointer(xprev,yprev);}//glutWarpPointer(xprev,yprev);
if (mstate==true&&xp1==true){rotb+=15;roty=15;xp1=false;}
if (mstate==true&&xn1==true){rotb-=15;roty=15;xn1=false;}
if (mstate==true&&yn1==true){rota+=1;rotx=1;yn1=false;}
if (mstate==true&&yp1==true){rota-=1;rotx=1;yp1=false;}
if (rotb>360){rotb=0;}
if (rotb<0){rotb=360;}
if (mstate==false){glutSetCursor(GLUT_CURSOR_LEFT_ARROW);}
glEnable(GL_LIGHTING);
glEnable(GL_TEXTURE_2D);
glEnable(GL_CULL_FACE);
glEnable(GL_NORMALIZE);
glEnable(GL_POLYGON_OFFSET_FILL);glPolygonOffset(2.5f,0.0f);
glEnable(GL_COLOR_MATERIAL);
glEnable(GL_BLEND);glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
glEnable(GL_DEPTH_TEST);
glEnable(GL_SMOOTH);glShadeModel(GL_SMOOTH);

{if (sunm>=0&&sunm<=180){glEnable(GL_LIGHT0);}if (sunm>=180){glEnable(GL_LIGHT3);}if (sunm>=225){glEnable(GL_LIGHT5);}
if (sunm>=270){glEnable(GL_LIGHT7);}if (sunm>=315){glEnable(GL_LIGHT5);}if (sunm>=350){glEnable(GL_LIGHT3);}
float pos[]={lightposx,lightposy,lightposz,1};//rotate light from angle of sun//-90,90
glLightfv(GL_LIGHT0,GL_POSITION,pos);/*glposition*/}

glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);glClearColor(0,0,0,1);glDepthFunc(GL_LEQUAL);glClearDepth(1);
seconds=seconds+.05;//with mssleep=1 and .05+=seconds then that is app. 1 sec.-- 1sec=.05;
if (seconds>=59){seconds=0;minutes=minutes+1;}
if (minutes>=59){minutes=0;hours=hours+1;}
if (hours>=24){hours=0;days=days+1;}
if (days>=30){months=months+1;}
if (months>=12){months=0;years=years+1;}
cout<<"seconds: "<<seconds<<" minutes: "<<minutes<<"hours: "<<hours<<"\n";

gluLookAt (0.0, 0.0, 10.0, 0.0, 0.0, 9.0, 0.0, 1.0, 0.0);
BuildList();//lists
glPushMatrix(); MOON(); glPopMatrix();
glPushMatrix(); SUN(); glPopMatrix();
glPushMatrix(); WORLDMAIN(); glPopMatrix();
glPushMatrix(); nightday(); glPopMatrix();
glPushMatrix(); PLAYER();
if (mstate==true){glDisable(GL_LIGHTING);glLoadIdentity();glTranslatef(0,0,-.1);glColor4f(1,1,1,1);glBegin(GL_LINES);glVertex2f(-.001,0);glVertex2f(.001,0);glEnd();glBegin(GL_LINES);glVertex2f(0,-.001);glVertex2f(0,.001);glEnd();}
glPopMatrix();
//glPushMatrix(); drawsquare(); glPopMatrix();
glutSwapBuffers();
;}

void reshape(int w,int h){mousex=w;mousey=h;
glMatrixMode(GL_PROJECTION);glLoadIdentity();
glViewport(0,0,w,h);gluPerspective(45.0f,(GLfloat)w/(GLfloat)h,0.1f,100.0f);
glMatrixMode(GL_MODELVIEW);glLoadIdentity();
;}
//not my code:
void setVSync(bool sync){	
typedef BOOL (APIENTRY *PFNWGLSWAPINTERVALPROC)( int );
PFNWGLSWAPINTERVALPROC wglSwapIntervalEXT = 0;
const char *extensions = (char*)glGetString( GL_EXTENSIONS );
if(strstr(extensions,"WGL_EXT_swap_control")==0){
return;}
else{
wglSwapIntervalEXT=(PFNWGLSWAPINTERVALPROC)wglGetProcAddress("wglSwapIntervalEXT");
if(wglSwapIntervalEXT)wglSwapIntervalEXT(sync);}
;}
//not my code above in setvsync

int main (int argc, char **argv) {//wi=500;le=500;
    srand(time(0));
    glutInit (&argc, argv);
    glutInitDisplayMode (GLUT_DOUBLE | GLUT_RGBA);
    glutInitWindowSize (500,500);//wi,le
    glutInitWindowPosition (100,100);//winx,winy
    glutCreateWindow ("...");
    glutDisplayFunc (display);
    glutIdleFunc (display);
    glutReshapeFunc (reshape);
    glutPassiveMotionFunc(mousemove);
    glutKeyboardFunc(keyPressed);
    glutKeyboardUpFunc(keyup);
    glutSpecialFunc(Skeys);
    glutMouseFunc(mouseclick);
    glutMainLoop();
    return 0;
;}


#include <iostream>
#include<windows.h>
#include<GL/glut.h>
#include <GL/glu.h>
#include<math.h>
#include <stdlib.h>
#include<stdio.h>
#include<windows.h>
#include<mmsystem.h>
using namespace std;
float _move = 0.0f;
float PI=3.1416;
float plane_position1=0.0f;
float plane_speed1 = 0.02f;
float bus_position2 = 0.0f;
float bus_speed2 = 0.04f;
float cloud_position1 = 0.0f;
float cloud_speed = 0.1f;
float twicePi = 2.0f * PI;
float ship_position1 = 0.0f;
float ship_speed1 = 0.05f;
float _angle1=0;
float speed = 1.0f;
float counter=0.0;

	float x, y;
	int i;
	GLfloat radius;
	int triangleAmount = 20;





 char text[] = "Hazrat Shahjalal International Airport";
void Sprint( float x, float y, char *st)
{
    int l,i;

    l=strlen( st ); // see how many characters are in text string.
    glColor3f(0.0,0.0,0.0);
    //glDisable(GL_LIGHTING);
    glRasterPos2f( x, y); // location to start printing text
    for( i=0; i < l; i++) // loop until i is greater then l
    {
       glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, st[i]);

    }
}


void moon(){
		 glPushMatrix();
    glTranslated(0.50,.80,0.0);
	glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
             glColor3f(1.0,1.0,0.8);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.15;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x,y );
        }
	glEnd();
	glPopMatrix();




}

void cloud(){
	GLfloat twicePi  = 2*PI;;

//cloud
      glPushMatrix();
   glTranslatef(cloud_position1,0.0f, 0.0f);
  	x=-.78f;
	y=.7f;
	radius =.08f;
	glBegin(GL_TRIANGLE_FAN);
        glColor3ub(254, 254, 254 );
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	x=-.7f;
	y=.77f;
	radius =.08f;
	glBegin(GL_TRIANGLE_FAN);
         glColor3ub(254, 254, 254 );
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	x=-.64f;
	y=.85f;
	radius =.08f;
	glBegin(GL_TRIANGLE_FAN);
       glColor3ub(254, 254, 254 );
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	x=-.68f;
	y=.71f;
	radius =.08f;
	glBegin(GL_TRIANGLE_FAN);
        glColor3ub(254, 254, 254 );
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	x=-.6f;
	y=.75f;
	radius =.08f;
	glBegin(GL_TRIANGLE_FAN);
       glColor3ub(254, 254, 254 );
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	x=-.55f;
	y=.8f;
	radius =.08f;
	glBegin(GL_TRIANGLE_FAN);
       glColor3ub(254, 254, 254 );
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


	glTranslatef(0.7f, 0.07f, 0.0f);
	x=-.78f;
	y=.7f;
	radius =.08f;
	glBegin(GL_TRIANGLE_FAN);
        glColor3ub(254, 254, 254 );
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	x=-.7f;
	y=.77f;
	radius =.08f;
	glBegin(GL_TRIANGLE_FAN);
       glColor3ub(254, 254, 254 );
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	x=-.64f;
	y=.85f;
	radius =.08f;
	glBegin(GL_TRIANGLE_FAN);
       glColor3ub(254, 254, 254 );
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	x=-.68f;
	y=.71f;
	radius =.08f;
	glBegin(GL_TRIANGLE_FAN);
         glColor3ub(254, 254, 254 );
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	x=-.6f;
	y=.75f;
	radius =.08f;
	glBegin(GL_TRIANGLE_FAN);
         glColor3ub(254, 254, 254 );
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	x=-.55f;
	y=.8f;
	radius =.08f;
	glBegin(GL_TRIANGLE_FAN);
         glColor3ub(254, 254, 254 );
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	glPopMatrix();
}

void airport_building(){
//main airport building
    glBegin(GL_QUADS);
	glColor3f(0.6f, 0.1f, 1.0f );
	glVertex2f(-0.35f,0.0f);
	glVertex2f(-0.35f,-0.30f);
    glVertex2f(0.35f,-0.30f);
	glVertex2f(0.35f,0.0f);
	glEnd();

	 glBegin(GL_QUADS);
	glColor3f(0.6f, 0.7f, 1.0f );
	glVertex2f(-0.35f,0.3f);
	glVertex2f(-0.35f,0.0f);
    glVertex2f(0.35f,0.0f);
	glVertex2f(0.35f,0.3f);
	glEnd();

     glBegin(GL_QUADS);
	glColor3f(0.6f, 0.7f, 1.0f );
	glVertex2f(-0.35f,0.5f);
	glVertex2f(-0.35f,0.0f);
    glVertex2f(0.35f,0.0f);
	glVertex2f(0.35f,0.5f);
	glEnd();
}
void AIRPORT(){
//text AIRPORT
	 glBegin(GL_QUADS);
	 glBegin(GL_QUADS);
	glColor3f(0.9f, 1.0f, 0.4f );
	glVertex2f(-0.37f,0.65f);
	glVertex2f(-0.37f,0.5f);
    glVertex2f(0.38f,0.5f);
	glVertex2f(0.38f,0.65f);
	glEnd();

     glPushMatrix();
    Sprint(-0.37,0.55,text);
    glPopMatrix();
}
void night(){
	glLoadIdentity();


    glClear(GL_COLOR_BUFFER_BIT);
	glLoadIdentity();
	glMatrixMode(GL_MODELVIEW);



	//moon
	moon();
	cloud();


	//buildings

//airport_building
    airport_building();


//AIRPORT
AIRPORT();




	// left upper
 glBegin(GL_QUADS);
	glColor3f(0.5f, 0.0f, 0.3f );
    glVertex2f(-0.33f,0.45f);
	glVertex2f(-0.33f,0.3f);
    glVertex2f(-0.22f,0.3f);
	glVertex2f(-0.22f,0.45f);
	glEnd();
  //2
    glBegin(GL_QUADS);
	glColor3f(0.5f, 0.0f, 0.3f );
    glVertex2f(-0.03f,0.45f);
	glVertex2f(-0.03f,0.3f);
    glVertex2f(-0.14f,0.3f);
	glVertex2f(-0.14f,0.45f);
	glEnd();

		//windows left 1
    glBegin(GL_QUADS);
	glColor3f(0.5f, 0.0f, 0.3f );
    glVertex2f(-0.33f,0.25f);
	glVertex2f(-0.33f,0.1f);
    glVertex2f(-0.22f,0.1f);
	glVertex2f(-0.22f,0.25f);
	glEnd();

	//2
	  glBegin(GL_QUADS);
	glColor3f(0.5f, 0.0f, 0.3f );
    glVertex2f(-0.03f,0.25f);
	glVertex2f(-0.03f,0.1f);
    glVertex2f(-0.14f,0.1f);
	glVertex2f(-0.14f,0.25f);
	glEnd();

//right lower 1
 glBegin(GL_QUADS);
	glColor3f(0.5f, 0.0f, 0.3f );
	glVertex2f(0.33f,0.25f);
	glVertex2f(0.33f,0.1f);
    glVertex2f(0.22f,0.1f);
	glVertex2f(0.22f,0.25f);
	glEnd();
//2
	glBegin(GL_QUADS);
	glColor3f(0.5f, 0.0f, 0.3f );
	glVertex2f(0.15f,0.25f);
	glVertex2f(0.15f,0.1f);
    glVertex2f(0.04f,0.1f);
	glVertex2f(0.04f,0.25f);
	glEnd();

	//right upper 1
	 glBegin(GL_QUADS);
	glColor3f(0.5f, 0.0f, 0.3f );
	glVertex2f(0.33f,0.3f);
	glVertex2f(0.33f,0.45f);
    glVertex2f(0.22f,0.45f);
	glVertex2f(0.22f,0.3f);
	glEnd();
//2
	glBegin(GL_QUADS);
	glColor3f(0.5f, 0.0f, 0.3f );
	glVertex2f(0.15f,0.3f);
	glVertex2f(0.15f,0.45f);
    glVertex2f(0.04f,0.45f);
	glVertex2f(0.04f,0.3f);
	glEnd();
//ddor left
	 glBegin(GL_QUADS);
	glColor3f(0.5f, 0.0f, 0.3f );
	glVertex2f(-0.10f,0.01f);
	glVertex2f(-0.10f,-0.25f);
    glVertex2f(-0.24f,-0.25f);
	glVertex2f(-0.24f,0.01f);
	glEnd();

 //right ddor
	 glBegin(GL_QUADS);
    glColor3f(0.5f, 0.0f, 0.3f );
	glVertex2f(0.27f,0.02f);
	glVertex2f(0.27f,-0.25f);
    glVertex2f(0.13f,-0.25f);
	glVertex2f(0.13f,0.02f);
	glEnd();

  //middle
    glBegin(GL_QUADS);
	glColor3f(0.3f, 0.2f, 0.2f );
	glVertex2f(0.01f,0.46f);
	glVertex2f(0.01f,-0.18f);
    glVertex2f(0.02f,-0.18);
	glVertex2f(0.02f,0.46f);
	glEnd();

 //building1
    glBegin(GL_QUADS);
	glColor3f(0.6f, 0.1f, 1.0f );
	glVertex2f(0.98f,-.23f);
	glVertex2f(0.87f,-.23f);
    glVertex2f(0.87f,.79f);
	glVertex2f(0.98f,.79f);
	glEnd();
     //window
    glBegin(GL_QUADS);
	glColor3f(0.5f, 0.0f, 0.3f );
	glVertex2f(0.88f,.75f);
	glVertex2f(0.915f,.75f);
    glVertex2f(0.915f,.71f);
	glVertex2f(0.88f,.71f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3f(0.5f, 0.0f, 0.3f );
	glVertex2f(0.88f,.65f);
	glVertex2f(0.915f,.65f);
    glVertex2f(0.915f,.61f);
	glVertex2f(0.88f,.61f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3f(0.5f, 0.0f, 0.3f );
	glVertex2f(0.88f,.55f);
	glVertex2f(0.915f,.55f);
    glVertex2f(0.915f,.51f);
	glVertex2f(0.88f,.51f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3f(0.5f, 0.0f, 0.3f );
	glVertex2f(0.88f,.45f);
	glVertex2f(0.915f,.45f);
    glVertex2f(0.915f,.41f);
	glVertex2f(0.88f,.41f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3f(0.5f, 0.0f, 0.3f );
	glVertex2f(0.88f,.35f);
	glVertex2f(0.915f,.35f);
    glVertex2f(0.915f,.31f);
	glVertex2f(0.88f,.31f);
	glEnd();

    glBegin(GL_QUADS);
	glColor3f(0.5f, 0.0f, 0.3f );
	glVertex2f(0.88f,.25f);
	glVertex2f(0.915f,.25f);
    glVertex2f(0.915f,.21f);
	glVertex2f(0.88f,.21f);
	glEnd();

    glBegin(GL_QUADS);
	glColor3f(0.5f, 0.0f, 0.3f );
	glVertex2f(0.88f,.15f);
	glVertex2f(0.915f,.15f);
    glVertex2f(0.915f,.11f);
	glVertex2f(0.88f,.11f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3f(0.5f, 0.0f, 0.3f );
	glVertex2f(0.88f,.05f);
	glVertex2f(0.915f,.05f);
    glVertex2f(0.915f,.01f);
	glVertex2f(0.88f,.01f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3f(0.5f, 0.0f, 0.3f );
	glVertex2f(0.88f,-.05f);
	glVertex2f(0.915f,-.05f);
    glVertex2f(0.915f,-.09f);
	glVertex2f(0.88f,-.09f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3f(0.5f, 0.0f, 0.3f );
	glVertex2f(0.88f,-.15f);
	glVertex2f(0.915f,-.15f);
    glVertex2f(0.915f,-.19f);
	glVertex2f(0.88f,-.19f);
	glEnd();

    //second row
    glBegin(GL_QUADS);
	glColor3f(0.5f, 0.0f, 0.3f );
	glVertex2f(0.935f,.75f);
	glVertex2f(0.97f,.75f);
    glVertex2f(0.97f,.71f);
	glVertex2f(0.935f,.71f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3f(0.5f, 0.0f, 0.3f );
	glVertex2f(0.935f,.65f);
	glVertex2f(0.97f,.65f);
    glVertex2f(0.97f,.61f);
	glVertex2f(0.935f,.61f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3f(0.5f, 0.0f, 0.3f );
	glVertex2f(0.935f,.55f);
	glVertex2f(0.97f,.55f);
    glVertex2f(0.97f,.51f);
	glVertex2f(0.935f,.51f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3f(0.5f, 0.0f, 0.3f );
	glVertex2f(0.935f,.45f);
	glVertex2f(0.97f,.45f);
    glVertex2f(0.97f,.41f);
	glVertex2f(0.935f,.41f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3f(0.5f, 0.0f, 0.3f );
	glVertex2f(0.935f,.35f);
	glVertex2f(0.97f,.35f);
    glVertex2f(0.97f,.31f);
	glVertex2f(0.935f,.31f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3f(0.5f, 0.0f, 0.3f );
	glVertex2f(0.935f,.25f);
	glVertex2f(0.97f,.25f);
    glVertex2f(0.97f,.21f);
	glVertex2f(0.935f,.21f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3f(0.5f, 0.0f, 0.3f );
	glVertex2f(0.935f,.15f);
	glVertex2f(0.97f,.15f);
    glVertex2f(0.97f,.11f);
	glVertex2f(0.935f,.11f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3f(0.5f, 0.0f, 0.3f );
	glVertex2f(0.935f,.05f);
	glVertex2f(0.97f,.05f);
    glVertex2f(0.97f,.01f);
	glVertex2f(0.935f,.01f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3f(0.5f, 0.0f, 0.3f );
	glVertex2f(0.935f,-.05f);
	glVertex2f(0.97f,-.05f);
    glVertex2f(0.97f,-.09f);
	glVertex2f(0.935f,-.09f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3f(0.5f, 0.0f, 0.3f );
	glVertex2f(0.935f,-.15f);
	glVertex2f(0.97f,-.15f);
    glVertex2f(0.97f,-.19f);
	glVertex2f(0.935f,-.19f);
	glEnd();

    //right building 2
    glBegin(GL_QUADS);
	glColor3f(0.6f, 0.1f, 1.0f );
	glVertex2f(0.85f,-.23f);
	glVertex2f(0.65f,-.23f);
    glVertex2f(0.65f,.48f);
	glVertex2f(0.85f,.48f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3f(0.6f, 0.1f, 1.0f );
	glVertex2f(0.86f,.48f);
	glVertex2f(0.64f,.48f);
    glVertex2f(0.64f,.52f);
	glVertex2f(0.86f,.52f);
	glEnd();

	//middle
    glBegin(GL_QUADS);
	glColor3f(0.3f, 0.2f, 0.2f );
	glVertex2f(0.75f,0.45f);
	glVertex2f(0.77f,0.45f);
    glVertex2f(0.77f,-0.2f);
	glVertex2f(0.75f,-0.2f);
	glEnd();

	//first row
    glBegin(GL_QUADS);
	glColor3f(0.5f, 0.0f, 0.3f );
    glVertex2f(0.72,.44f);
	glVertex2f(0.67,.44f);
    glVertex2f(0.67,.40f);
	glVertex2f(0.72,.40f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3f(0.5f, 0.0f, 0.3f );
	glVertex2f(0.72,.36f);
	glVertex2f(0.67,.36f);
    glVertex2f(0.67,.32f);
	glVertex2f(0.72,.32f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3f(0.5f, 0.0f, 0.3f );
	glVertex2f(0.72,.26f);
	glVertex2f(0.67,.26f);
    glVertex2f(0.67,.22f);
	glVertex2f(0.72,.22f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3f(0.5f, 0.0f, 0.3f );
	glVertex2f(0.72,.16f);
	glVertex2f(0.67,.16f);
    glVertex2f(0.67,.12f);
	glVertex2f(0.72,.12f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3f(0.5f, 0.0f, 0.3f );
	glVertex2f(0.72,.06f);
	glVertex2f(0.67,.06f);
    glVertex2f(0.67,.02f);
	glVertex2f(0.72,.02f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3f(0.5f, 0.0f, 0.3f );
	glVertex2f(0.72,-.04f);
	glVertex2f(0.67,-.04f);
    glVertex2f(0.67,-.08f);
	glVertex2f(0.72,-.08f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3f(0.5f, 0.0f, 0.3f );
	glVertex2f(0.72,-.14f);
	glVertex2f(0.67,-.14f);
    glVertex2f(0.67,-.18f);
	glVertex2f(0.72,-.18f);
	glEnd();
	//second row
	 glBegin(GL_QUADS);
	glColor3f(0.5f, 0.0f, 0.3f );
	glVertex2f(0.84,.44f);
	glVertex2f(0.79,.44f);
    glVertex2f(0.79,.40f);
	glVertex2f(0.84,.40f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3f(0.5f, 0.0f, 0.3f );
	glVertex2f(0.84,.36f);
	glVertex2f(0.79,.36f);
    glVertex2f(0.79,.32f);
	glVertex2f(0.84,.32f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3f(0.5f, 0.0f, 0.3f );
	glVertex2f(0.84,.26f);
	glVertex2f(0.79,.26f);
    glVertex2f(0.79,.22f);
	glVertex2f(0.84,.22f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3f(0.5f, 0.0f, 0.3f );
	glVertex2f(0.84,.16f);
	glVertex2f(0.79,.16f);
    glVertex2f(0.79,.12f);
	glVertex2f(0.84,.12f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3f(0.5f, 0.0f, 0.3f );
	glVertex2f(0.84,.06f);
	glVertex2f(0.79,.06f);
    glVertex2f(0.79,.02f);
	glVertex2f(0.84,.02f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3f(0.5f, 0.0f, 0.3f );
	glVertex2f(0.84,-.04f);
	glVertex2f(0.79,-.04f);
    glVertex2f(0.79,-.08f);
	glVertex2f(0.84,-.08f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3f(0.5f, 0.0f, 0.3f );
	glVertex2f(0.84,-.14f);
	glVertex2f(0.79,-.14f);
    glVertex2f(0.79,-.18f);
	glVertex2f(0.84,-.18f);
	glEnd();

     //building 3
    glBegin(GL_QUADS);
	glColor3f(0.6f, 0.1f, 1.0f );
	glVertex2f(0.60f,-.23f);
	glVertex2f(0.40f,-.23f);
    glVertex2f(0.40f,.35f);
	glVertex2f(0.60f,.35f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3f(0.6f, 0.1f, 1.0f );
	glVertex2f(0.61f,.33f);
	glVertex2f(0.39f,.33f);
    glVertex2f(0.39f,.38f);
	glVertex2f(0.61f,.38f);
	glEnd();

    //first window
    glBegin(GL_QUADS);
    glColor3f(0.5f, 0.0f, 0.3f );
	glVertex2f(0.58f,.27f);
	glVertex2f(0.53f,.27f);
    glVertex2f(0.53f,.21f);
	glVertex2f(0.58f,.21f);
	glEnd();
    glBegin(GL_QUADS);
    glColor3f(0.5f, 0.0f, 0.3f );
	glVertex2f(0.58f,.17f);
	glVertex2f(0.53f,.17f);
    glVertex2f(0.53f,.11f);
	glVertex2f(0.58f,.11f);
	glEnd();
    glBegin(GL_QUADS);
    glColor3f(0.5f, 0.0f, 0.3f );
	glVertex2f(0.58f,.07f);
	glVertex2f(0.53f,.07f);
    glVertex2f(0.53f,.01);
	glVertex2f(0.58f,.01f);
	glEnd();
    glBegin(GL_QUADS);
    glColor3f(0.5f, 0.0f, 0.3f );
	glVertex2f(0.58f,-.03f);
	glVertex2f(0.53f,-.03f);
    glVertex2f(0.53f,-.09f);
	glVertex2f(0.58f,-.09f);
	glEnd();
    glBegin(GL_QUADS);
    glColor3f(0.5f, 0.0f, 0.3f );
	glVertex2f(0.58f,-.13f);
	glVertex2f(0.53f,-.13f);
    glVertex2f(0.53f,-.19f);
	glVertex2f(0.58f,-.19f);
	glEnd();

    //middle
    glBegin(GL_QUADS);
	glColor3f(0.3f, 0.2f, 0.2f );
	glVertex2f(0.50f,.27f);
	glVertex2f(0.490f,.27f);
    glVertex2f(0.49f,-0.2f);
	glVertex2f(0.50f,-0.2f);
	glEnd();

    //second window
    glBegin(GL_QUADS);
	glColor3f(0.5f, 0.0f, 0.3f );
	glVertex2f(0.47f,.27f);
	glVertex2f(0.42f,.27f);
    glVertex2f(0.42f,.21f);
	glVertex2f(0.47f,.21f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3f(0.5f, 0.0f, 0.3f );
	glVertex2f(0.47f,.17f);
	glVertex2f(0.42f,.17f);
    glVertex2f(0.42f,.11f);
	glVertex2f(0.47f,.11f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3f(0.5f, 0.0f, 0.3f );
	glVertex2f(0.47f,.07f);
	glVertex2f(0.42f,.07f);
    glVertex2f(0.42f,.01);
	glVertex2f(0.47f,.01f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3f(0.5f, 0.0f, 0.3f );
	glVertex2f(0.47f,-.03f);
	glVertex2f(0.42f,-.03f);
    glVertex2f(0.42f,-.09f);
	glVertex2f(0.47f,-.09f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3f(0.5f, 0.0f, 0.3f );
	glVertex2f(0.47f,-.13f);
	glVertex2f(0.42f,-.13f);
    glVertex2f(0.42f,-.19f);
	glVertex2f(0.47f,-.19f);
	glEnd();



	//building4
    glBegin(GL_QUADS);
	glColor3f(0.6f, 0.1f, 1.0f );
	glVertex2f(-0.62f,-.23f);
	glVertex2f(-0.43f,-.23f);
    glVertex2f(-0.43f,.35f);
	glVertex2f(-0.62f,.35f);
	glEnd();

    glBegin(GL_QUADS);
	glColor3f(0.6f, 0.1f, 1.0f );
	glVertex2f(-0.63f,.35f);
	glVertex2f(-0.42f,.35f);
    glVertex2f(-0.42f,.40f);
	glVertex2f(-0.63f,.40f);
	glEnd();


    //first window
    glBegin(GL_QUADS);
	glColor3f(0.5f, 0.0f, 0.3f );
	glVertex2f(-0.61f,.32f);
	glVertex2f(-0.56f,.32f);
    glVertex2f(-0.56f,.26f);
	glVertex2f(-0.61f,.26f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3f(0.5f, 0.0f, 0.3f );
	glVertex2f(-0.61f,.22f);
	glVertex2f(-0.56f,.22f);
    glVertex2f(-0.56f,.14f);
	glVertex2f(-0.61f,.14f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3f(0.5f, 0.0f, 0.3f );
	glVertex2f(-0.61f,.09f);
	glVertex2f(-0.56f,.09f);
    glVertex2f(-0.56f,.01);
	glVertex2f(-0.61f,.01f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3f(0.5f, 0.0f, 0.3f );
	glVertex2f(-0.61f,-.03f);
	glVertex2f(-0.56f,-.03f);
    glVertex2f(-0.56f,-.09f);
	glVertex2f(-0.61f,-.09f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3f(0.5f, 0.0f, 0.3f );
	glVertex2f(-0.61f,-.13f);
	glVertex2f(-0.56f,-.13f);
    glVertex2f(-0.56f,-.19f);
	glVertex2f(-0.61f,-.19f);
	glEnd();
    //middle
    glBegin(GL_QUADS);
	glColor3f(0.3f, 0.2f, 0.2f );
	glVertex2f(-0.54f,0.32f);
	glVertex2f(-0.53f,0.32f);
    glVertex2f(-0.53f,-0.2f);
	glVertex2f(-0.54f,-0.2f);
	glEnd();

    //second window
    glBegin(GL_QUADS);
	glColor3f(0.5f, 0.0f, 0.3f );
	glVertex2f(-0.50f,.32f);
	glVertex2f(-0.45f,.32f);
    glVertex2f(-0.45f,.26f);
	glVertex2f(-0.50f,.26f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3f(0.5f, 0.0f, 0.3f );
	glVertex2f(-0.50f,.22f);
	glVertex2f(-0.45f,.22f);
    glVertex2f(-0.45f,.15f);
	glVertex2f(-0.50f,.15f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3f(0.5f, 0.0f, 0.3f );
	glVertex2f(-0.50f,.09f);
	glVertex2f(-0.45f,.09f);
    glVertex2f(-0.45f,.01);
	glVertex2f(-0.50f,.01f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3f(0.5f, 0.0f, 0.3f );
	glVertex2f(-0.50f,-.03f);
	glVertex2f(-0.45f,-.03f);
    glVertex2f(-0.45f,-.09f);
	glVertex2f(-0.50f,-.09f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3f(0.5f, 0.0f, 0.3f );
	glVertex2f(-0.50f,-.13f);
	glVertex2f(-0.45f,-.13f);
    glVertex2f(-0.45f,-.19f);
	glVertex2f(-0.50f,-.19f);
	glEnd();

    //building5
    glBegin(GL_QUADS);
	glColor3f(0.6f, 0.1f, 1.0f );
	glVertex2f(-0.85f,-.23f);
	glVertex2f(-0.67f,-.23f);
    glVertex2f(-0.67f,.48f);
	glVertex2f(-0.85f,.48f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3f(0.6f, 0.1f, 1.0f );
	glVertex2f(-0.86f,.47f);
	glVertex2f(-0.66f,.47f);
    glVertex2f(-0.66f,.51f);
	glVertex2f(-0.86f,.51f);
	glEnd();

	//middle

    glBegin(GL_QUADS);
	glColor3f(0.3f, 0.2f, 0.2f );
	glVertex2f(-0.76f,0.43f);
	glVertex2f(-0.78f,0.43f);
    glVertex2f(-0.78f,-0.2f);
	glVertex2f(-0.76f,-0.2f);
	glEnd();

	//first row
    glBegin(GL_QUADS);
	glColor3f(0.5f, 0.0f, 0.3f );
	glVertex2f(-0.74,.44f);
	glVertex2f(-0.70,.44f);
    glVertex2f(-0.70,.39f);
	glVertex2f(-0.74,.39f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3f(0.5f, 0.0f, 0.3f );
	glVertex2f(-0.74,.36f);
	glVertex2f(-0.70,.36f);
    glVertex2f(-0.70,.32f);
	glVertex2f(-0.74,.32f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3f(0.5f, 0.0f, 0.3f );
	glVertex2f(-0.74,.26f);
	glVertex2f(-0.70,.26f);
    glVertex2f(-0.70,.22f);
	glVertex2f(-0.74,.22f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3f(0.5f, 0.0f, 0.3f );
	glVertex2f(-0.74,.16f);
	glVertex2f(-0.70,.16f);
    glVertex2f(-0.70,.12f);
	glVertex2f(-0.74,.12f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3f(0.5f, 0.0f, 0.3f );
	glVertex2f(-0.74,.06f);
	glVertex2f(-0.70,.06f);
    glVertex2f(-0.70,.02f);
	glVertex2f(-0.74,.02f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3f(0.5f, 0.0f, 0.3f );
	glVertex2f(-0.74,-.04f);
	glVertex2f(-0.70,-.04f);
    glVertex2f(-0.70,-.08f);
	glVertex2f(-0.74,-.08f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3f(0.5f, 0.0f, 0.3f );
	glVertex2f(-0.74,-.14f);
	glVertex2f(-0.70,-.14f);
    glVertex2f(-0.70,-.18f);
	glVertex2f(-0.74,-.18f);
	glEnd();
	//second row
	 glBegin(GL_QUADS);
	glColor3f(0.5f, 0.0f, 0.3f );
	glVertex2f(-0.84,.43f);
	glVertex2f(-0.80,.43f);
    glVertex2f(-0.80,.39f);
	glVertex2f(-0.84,.39f);
	glEnd();
    glBegin(GL_QUADS);
    glColor3f(0.5f, 0.0f, 0.3f );
	glVertex2f(-0.84,.36f);
	glVertex2f(-0.80,.36f);
    glVertex2f(-0.80,.32f);
	glVertex2f(-0.84,.32f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3f(0.5f, 0.0f, 0.3f );
	glVertex2f(-0.84,.26f);
	glVertex2f(-0.80,.26f);
    glVertex2f(-0.80,.22f);
	glVertex2f(-0.84,.22f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3f(0.5f, 0.0f, 0.3f );
	glVertex2f(-0.84,.16f);
	glVertex2f(-0.80,.16f);
    glVertex2f(-0.80,.12f);
	glVertex2f(-0.84,.12f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3f(0.5f, 0.0f, 0.3f );
	glVertex2f(-0.84,.06f);
	glVertex2f(-0.80,.06f);
    glVertex2f(-0.80,.02f);
	glVertex2f(-0.84,.02f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3f(0.5f, 0.0f, 0.3f );
	glVertex2f(-0.84,-.04f);
	glVertex2f(-0.80,-.04f);
    glVertex2f(-0.80,-.08f);
	glVertex2f(-0.84,-.08f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3f(0.5f, 0.0f, 0.3f );
	glVertex2f(-0.84,-.14f);
	glVertex2f(-0.80,-.14f);
    glVertex2f(-0.80,-.18f);
	glVertex2f(-0.84,-.18f);
	glEnd();

    //building6
    glBegin(GL_QUADS);
	glColor3f(0.6f, 0.1f, 1.0f );
	glVertex2f(-0.98f,-.23f);
	glVertex2f(-0.87f,-.23f);
    glVertex2f(-0.87f,.79f);
	glVertex2f(-0.98f,.79f);
	glEnd();

     //window
	glPushMatrix();
    glBegin(GL_QUADS);
	glColor3f(0.5f, 0.0f, 0.3f );
	glVertex2f(-0.88f,.75f);
	glVertex2f(-0.915f,.75f);
    glVertex2f(-0.915f,.71f);
	glVertex2f(-0.88f,.71f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3f(0.5f, 0.0f, 0.3f );
	glVertex2f(-0.88f,.65f);
	glVertex2f(-0.915f,.65f);
    glVertex2f(-0.915f,.61f);
	glVertex2f(-0.88f,.61f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3f(0.5f, 0.0f, 0.3f );
	glVertex2f(-0.88f,.55f);
	glVertex2f(-0.915f,.55f);
    glVertex2f(-0.915f,.51f);
	glVertex2f(-0.88f,.51f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3f(0.5f, 0.0f, 0.3f );
	glVertex2f(-0.88f,.45f);
	glVertex2f(-0.915f,.45f);
    glVertex2f(-0.915f,.41f);
	glVertex2f(-0.88f,.41f);
	glEnd();
    glBegin(GL_QUADS);
    glColor3f(0.5f, 0.0f, 0.3f );
	glVertex2f(-0.88f,.35f);
	glVertex2f(-0.915f,.35f);
    glVertex2f(-0.915f,.31f);
	glVertex2f(-0.88f,.31f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3f(0.5f, 0.0f, 0.3f );
	glVertex2f(-0.88f,.25f);
	glVertex2f(-0.915f,.25f);
    glVertex2f(-0.915f,.21f);
	glVertex2f(-0.88f,.21f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3f(0.5f, 0.0f, 0.3f );
	glVertex2f(-0.88f,.15f);
	glVertex2f(-0.915f,.15f);
    glVertex2f(-0.915f,.11f);
	glVertex2f(-0.88f,.11f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3f(0.5f, 0.0f, 0.3f );
	glVertex2f(-0.88f,.05f);
	glVertex2f(-0.915f,.05f);
    glVertex2f(-0.915f,.01f);
	glVertex2f(-0.88f,.01f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3f(0.5f, 0.0f, 0.3f );
	glVertex2f(-0.88f,-.05f);
	glVertex2f(-0.915f,-.05f);
    glVertex2f(-0.915f,-.09f);
	glVertex2f(-0.88f,-.09f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3f(0.5f, 0.0f, 0.3f );
	glVertex2f(-0.88f,-.15f);
	glVertex2f(-0.915f,-.15f);
    glVertex2f(-0.915f,-.19f);
	glVertex2f(-0.88f,-.19f);
	glEnd();

    //second row
    glBegin(GL_QUADS);
	glColor3f(0.5f, 0.0f, 0.3f );
	glVertex2f(-0.935f,.75f);
	glVertex2f(-0.97f,.75f);
    glVertex2f(-0.97f,.71f);
	glVertex2f(-0.935f,.71f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3f(0.5f, 0.0f, 0.3f );
	glVertex2f(-0.935f,.65f);
	glVertex2f(-0.97f,.65f);
    glVertex2f(-0.97f,.61f);
	glVertex2f(-0.935f,.61f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3f(0.5f, 0.0f, 0.3f );
	glVertex2f(-0.935f,.55f);
	glVertex2f(-0.97f,.55f);
    glVertex2f(-0.97f,.51f);
	glVertex2f(-0.935f,.51f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3f(0.5f, 0.0f, 0.3f );
	glVertex2f(-0.935f,.45f);
	glVertex2f(-0.97f,.45f);
    glVertex2f(-0.97f,.41f);
	glVertex2f(-0.935f,.41f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3f(0.5f, 0.0f, 0.3f );
	glVertex2f(-0.935f,.35f);
	glVertex2f(-0.97f,.35f);
    glVertex2f(-0.97f,.31f);
	glVertex2f(-0.935f,.31f);
	glEnd();
    glBegin(GL_QUADS);
    glColor3f(0.5f, 0.0f, 0.3f );
	glVertex2f(-0.935f,.25f);
	glVertex2f(-0.97f,.25f);
    glVertex2f(-0.97f,.21f);
	glVertex2f(-0.935f,.21f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3f(0.5f, 0.0f, 0.3f );
	glVertex2f(-0.935f,.15f);
	glVertex2f(-0.97f,.15f);
    glVertex2f(-0.97f,.11f);
	glVertex2f(-0.935f,.11f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3f(0.5f, 0.0f, 0.3f );
	glVertex2f(-0.935f,.05f);
	glVertex2f(-0.97f,.05f);
    glVertex2f(-0.97f,.01f);
	glVertex2f(-0.935f,.01f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3f(0.5f, 0.0f, 0.3f );
	glVertex2f(-0.935f,-.05f);
	glVertex2f(-0.97f,-.05f);
    glVertex2f(-0.97f,-.09f);
	glVertex2f(-0.935f,-.09f);
	glEnd();
    glBegin(GL_QUADS);
	glColor3f(0.5f, 0.0f, 0.3f );
	glVertex2f(-0.935f,-.15f);
	glVertex2f(-0.97f,-.15f);
    glVertex2f(-0.97f,-.19f);
	glVertex2f(-0.935f,-.19f);
	glEnd();
	glPopMatrix();


	//field
	glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.8f, 0.2f );
	glVertex2f(-1.0f, -0.23f);
    glVertex2f(-1.0f, -0.35f);
    glVertex2f(1.0f, -0.35f);
    glVertex2f(1.0f, -0.23f);
    glEnd();
    glPopMatrix();

    //main road
    glBegin(GL_QUADS);
	glColor3f(0.4f, 0.5f, 0.6f );
	glVertex2f(-1.0f,-.30f);
	glVertex2f(-1.0f,-.99f);
	glVertex2f(1.0f,-.99f);
	glVertex2f(1.0f,-.30f);
	glEnd();

    //line
    glBegin(GL_QUADS);
    glColor3ub(255, 255, 255);
	glVertex2f(-1.0f,-0.45f);
	glVertex2f(-1.0f,-0.47f);
	glVertex2f(-0.9f,-0.47f);
	glVertex2f(-0.9f,-0.45f);
	glEnd();

	 glBegin(GL_QUADS);
    glColor3ub(255, 255, 255);
	glVertex2f(-0.8f,-0.45f);
	glVertex2f(-0.8f,-0.47f);
	glVertex2f(-0.7f,-0.47f);
	glVertex2f(-0.7f,-0.45f);
	glEnd();

	 glBegin(GL_QUADS);
    glColor3ub(255, 255, 255);
	glVertex2f(-0.6f,-0.45f);
	glVertex2f(-0.6f,-0.47f);
	glVertex2f(-0.5,-0.47f);
	glVertex2f(-0.5f,-0.45f);
	glEnd();

	 glBegin(GL_QUADS);
    glColor3ub(255, 255, 255);
	glVertex2f(-0.4f,-0.45f);
	glVertex2f(-0.4f,-0.47f);
	glVertex2f(-0.3,-0.47f);
	glVertex2f(-0.3f,-0.45f);
	glEnd();

	 glBegin(GL_QUADS);
    glColor3ub(255, 255, 255);
	glVertex2f(-0.2f,-0.45f);
	glVertex2f(-0.2f,-0.47f);
	glVertex2f(-0.1,-0.47f);
	glVertex2f(-0.1f,-0.45f);
	glEnd();

	 glBegin(GL_QUADS);
    glColor3ub(255, 255, 255);
	glVertex2f(0.0f,-0.45f);
	glVertex2f(0.0f,-0.47f);
	glVertex2f(0.1,-0.47f);
	glVertex2f(0.1f,-0.45f);
	glEnd();


	 glBegin(GL_QUADS);
    glColor3ub(255, 255, 255);
	glVertex2f(0.2f,-0.45f);
	glVertex2f(0.2f,-0.47f);
	glVertex2f(0.3,-0.47f);
	glVertex2f(0.3f,-0.45f);
	glEnd();

	 glBegin(GL_QUADS);
    glColor3ub(255, 255, 255);
	glVertex2f(0.4f,-0.45f);
	glVertex2f(0.4f,-0.47f);
	glVertex2f(0.5,-0.47f);
	glVertex2f(0.5f,-0.45f);
	glEnd();

	 glBegin(GL_QUADS);
    glColor3ub(255, 255, 255);
	glVertex2f(0.6f,-0.45f);
	glVertex2f(0.6f,-0.47f);
	glVertex2f(0.7,-0.47f);
	glVertex2f(0.7f,-0.45f);
	glEnd();

	 glBegin(GL_QUADS);
    glColor3ub(255, 255, 255);
	glVertex2f(0.8f,-0.45f);
	glVertex2f(0.8f,-0.47f);
	glVertex2f(0.9,-0.47f);
	glVertex2f(0.9f,-0.45f);
	glEnd();


  //line 2

    glBegin(GL_QUADS);
	glColor3f(1.0f,1.0f,1.0f);
	glVertex2f(-.9f,-.79f);
	glVertex2f(-.9f,-.81f);
	glVertex2f(-.7f,-.81f);
	glVertex2f(-.7f,-.79f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(1.0f,1.0f,1.0f);
	glVertex2f(-.6f,-.79f);
	glVertex2f(-.6f,-.81f);
	glVertex2f(-.4f,-.81f);
	glVertex2f(-.4f,-.79f);
	glEnd();

    glBegin(GL_QUADS);
	glColor3f(1.0f,1.0f,1.0f);
	glVertex2f(-.3f,-.79f);
	glVertex2f(-.3f,-.81f);
	glVertex2f(-.1f,-.81f);
	glVertex2f(-.1f,-.79f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(1.0f,1.0f,1.0f);
	glVertex2f(.0f,-.79f);
	glVertex2f(.0f,-.81f);
	glVertex2f(.3f,-.81f);
	glVertex2f(.3f,-.79f);
	glEnd();

    glBegin(GL_QUADS);
	glColor3f(1.0f,1.0f,1.0f);
	glVertex2f(.4f,-.79f);
	glVertex2f(.4f,-.81f);
	glVertex2f(.6f,-.81f);
	glVertex2f(.6f,-.79f);
	glEnd();

    glBegin(GL_QUADS);
	glColor3f(1.0f,1.0f,1.0f);
	glVertex2f(.8f,-.79f);
	glVertex2f(.8f,-.81f);
	glVertex2f(1.0f,-.81f);
	glVertex2f(1.0f,-.79f);
	glEnd();

	//road divider
	glBegin(GL_QUADS);
	glColor3f(1.0f,1.0f,1.0f);
	glVertex2f(-1.0f,-.62f);
	glVertex2f(-1.0f,-.59f);
	glVertex2f(-.8f,-.59f);
	glVertex2f(-.8f,-.62f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(.0f,.0f,.0f);
	glVertex2f(-.8f,-.62f);
	glVertex2f(-.8f,-.59f);
	glVertex2f(-.6f,-.59f);
	glVertex2f(-.6f,-.62f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(1.0f,1.0f,1.0f);
	glVertex2f(-.6f,-.62f);
	glVertex2f(-.6f,-.59f);
	glVertex2f(-.4f,-.59f);
	glVertex2f(-.4f,-.62f);
	glEnd();

    glBegin(GL_QUADS);
	glColor3f(.0f,.0f,.0f);
	glVertex2f(-.4f,-.62f);
	glVertex2f(-.4f,-.59f);
	glVertex2f(-.2f,-.59f);
	glVertex2f(-.2f,-.62f);
	glEnd();

    glBegin(GL_QUADS);
	glColor3f(1.0f,1.0f,1.0f);
	glVertex2f(-.2f,-.62f);
	glVertex2f(-.2f,-.59f);
	glVertex2f(0.0f,-.59f);
	glVertex2f(0.0f,-.62f);
	glEnd();

    glBegin(GL_QUADS);
	glColor3f(.0f,.0f,.0f);
	glVertex2f(0.0f,-.62f);
	glVertex2f(0.0f,-.59f);
	glVertex2f(0.2f,-.59f);
	glVertex2f(0.2f,-.62f);
	glEnd();



	glBegin(GL_QUADS);
	glColor3f(1.0f,1.0f,1.0f);
	glVertex2f(.2f,-.62f);
	glVertex2f(.2f,-.59f);
	glVertex2f(.4f,-.59f);
	glVertex2f(.4f,-.62f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(.0f,.0f,.0f);
	glVertex2f(.4f,-.62f);
	glVertex2f(.4f,-.59f);
	glVertex2f(.6f,-.59f);
	glVertex2f(.6f,-.62f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(1.0f,1.0f,1.0f);
	glVertex2f(.6f,-.62f);
	glVertex2f(.6f,-.59f);
	glVertex2f(.8f,-.59f);
	glVertex2f(.8f,-.62f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0.0f,0.0f,0.0f);
	glVertex2f(.8f,-.62f);
	glVertex2f(.8f,-.59f);
	glVertex2f(1.0f,-.59f);
	glVertex2f(1.0f,-.62f);
	glEnd();


	//lamppost 1
    glBegin(GL_QUADS);
	glColor3ub(1.0f,1.0f,1.0f);
    glVertex2f(-0.85f, -0.59f);
    glVertex2f(-0.87f, -0.59f);
    glVertex2f(-0.87f, -0.40f);
    glVertex2f(-0.85f, -0.40f);
    glEnd();
    glPushMatrix();
    glTranslated(-0.86,-0.40,0.0);
	glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3f(1.0f,1.0f,0.0f);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.03;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x,y );
        }
	glEnd();
	glPopMatrix();

//lamppost2
    glBegin(GL_QUADS);
	glColor3ub(1.0f,1.0f,1.0f);
    glVertex2f(-0.5f, -0.59f);
    glVertex2f(-0.48f, -0.59f);
    glVertex2f(-0.48f, -0.40f);
    glVertex2f(-0.5f, -0.40f);
    glEnd();
    glPushMatrix();
    glTranslated(-0.49,-0.40,0.0);
	glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
           glColor3f(1.0f,0.8f,0.2f);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.03;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x,y );
        }
	glEnd();
	glPopMatrix();

//lamppost3
    glBegin(GL_QUADS);
	glColor3ub(1.0f,1.0f,1.0f);
    glVertex2f(-0.15f, -0.59f);
    glVertex2f(-0.13f, -0.59f);
    glVertex2f(-0.13f, -0.40f);
    glVertex2f(-0.15f, -0.40f);
    glEnd();
       glPushMatrix();
    glTranslated(-0.14,-0.40,0.0);
	glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
           glColor3f(1.0f,1.0f,0.0f);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.03;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x,y );
        }
	glEnd();
	glPopMatrix();


    //lamppost4
    glBegin(GL_QUADS);
	glColor3ub(1.0f,1.0f,1.0f);
    glVertex2f(0.55f, -0.59f);
    glVertex2f(0.57f, -0.59f);
    glVertex2f(0.57f, -0.40f);
    glVertex2f(0.55f, -0.40f);
    glEnd();
       glPushMatrix();
    glTranslated(0.56,-0.40,0.0);
	glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3f(1.0f,1.0f,0.0f);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.03;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x,y );
        }
	glEnd();
	glPopMatrix();



    //lamppost5
    glBegin(GL_QUADS);
	glColor3ub(1.0f,1.0f,1.0f);
    glVertex2f(0.15f, -0.59f);
    glVertex2f(0.17f, -0.59f);
    glVertex2f(0.17f, -0.40f);
    glVertex2f(0.15f, -0.40f);
    glEnd();
       glPushMatrix();
    glTranslated(0.16,-0.40,0.0);
	glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3f(1.0f,0.8f,0.2f);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.03;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x,y );
        }
	glEnd();
	glPopMatrix();


	//plane
    glPushMatrix();
     glTranslatef(plane_position1,-0.4f, 0.0f);
    glTranslatef(-0.9,plane_position1, 0.0f);
   //body
     glBegin(GL_QUADS);
	  glColor3f(1.0f,1.0f,0.8f);
    glVertex2f(-0.3f, -0.22f);
    glVertex2f(0.0f, -0.22f);
    glVertex2f(0.0f, -0.42f);
    glVertex2f(-0.3f, -0.42f);
    glEnd();

     glBegin(GL_QUADS);
	  glColor3f(1.0f,1.0f,0.8f);
    glVertex2f(0.1f, -0.24f);
    glVertex2f(0.0f, -0.22f);
    glVertex2f(0.0f, -0.42f);
    glVertex2f(0.1f, -0.38f);
    glEnd();

     glBegin(GL_TRIANGLES);
glColor3f(0.0f,0.2f,0.0f);
    glVertex2f(0.1f, -0.24f);
    glVertex2f(0.1f, -0.38f);
    glVertex2f(0.20f, -0.3f);
    glEnd();

    glBegin(GL_QUADS);
	  glColor3f(0.0f,0.2f,0.0f);
    glVertex2f(-0.3f, -0.22f);
    glVertex2f(-0.3f, -0.42f);
    glVertex2f(-0.4f, -0.38f);
    glVertex2f(-0.4f, -0.25f);
    glEnd();

     glBegin(GL_TRIANGLES);
	  glColor3f(0.0f,0.2f,0.0f);
    glVertex2f(-0.4f, -0.38f);
    glVertex2f(-0.4f, -0.26f);
    glVertex2f(-0.50f, -0.30f);
    glEnd();

    glBegin(GL_QUADS);
	 glColor3f(0.0f,0.2f,0.0f);
    glVertex2f(0.07f, -0.28f);
    glVertex2f(0.05f, -0.28f);
    glVertex2f(0.05f, -0.3f);
    glVertex2f(0.07f, -0.3f);
    glEnd();
     glBegin(GL_QUADS);
	  glColor3f(0.0f,0.2f,0.0f);
    glVertex2f(0.03f, -0.27f);
    glVertex2f(0.0f, -0.27f);
    glVertex2f(0.0f, -0.33f);
    glVertex2f(0.03f, -0.33f);
    glEnd();

      glBegin(GL_QUADS);
	 glColor3f(0.0f,0.2f,0.0f);
    glVertex2f(-0.01f, -0.28f);
    glVertex2f(-0.03f, -0.28f);
    glVertex2f(-0.03f, -0.3f);
    glVertex2f(-0.01f, -0.3f);
    glEnd();
     glBegin(GL_QUADS);
	 glColor3f(0.0f,0.2f,0.0f);
    glVertex2f(-0.05f, -0.28f);
    glVertex2f(-0.07f, -0.28f);
    glVertex2f(-0.07f, -0.3f);
    glVertex2f(-0.05f, -0.3f);
    glEnd();

      glBegin(GL_QUADS);
	 glColor3f(0.0f,0.2f,0.0f);
    glVertex2f(-0.09f, -0.28f);
    glVertex2f(-0.11f, -0.28f);
    glVertex2f(-0.11f, -0.3f);
    glVertex2f(-0.09f, -0.3f);
    glEnd();

    glBegin(GL_QUADS);
	  glColor3f(0.0f,0.2f,0.0f);
    glVertex2f(-0.13f, -0.28f);
    glVertex2f(-0.15f, -0.28f);
    glVertex2f(-0.15f, -0.3f);
    glVertex2f(-0.13f, -0.3f);
    glEnd();


    glBegin(GL_QUADS);
	  glColor3f(0.0f,0.2f,0.0f);
    glVertex2f(-0.17f, -0.28f);
    glVertex2f(-0.19f, -0.28f);
    glVertex2f(-0.19f, -0.3f);
    glVertex2f(-0.17f, -0.3f);
    glEnd();


    glBegin(GL_QUADS);
	glColor3f(0.0f,0.2f,0.0f);
    glVertex2f(-0.21f, -0.28f);
    glVertex2f(-0.23f, -0.28f);
    glVertex2f(-0.23f, -0.3f);
    glVertex2f(-0.21f, -0.3f);
    glEnd();

     glBegin(GL_QUADS);
	  glColor3f(0.0f,0.2f,0.0f);
    glVertex2f(-0.25f, -0.28f);
    glVertex2f(-0.27f, -0.28f);
    glVertex2f(-0.27f, -0.3f);
    glVertex2f(-0.25f, -0.3f);
    glEnd();




     glBegin(GL_QUADS);
	  glColor3f(0.0f,0.2f,0.0f);
    glVertex2f(-0.31f, -0.28f);
    glVertex2f(-0.33f, -0.28f);
    glVertex2f(-0.33f, -0.3f);
    glVertex2f(-0.31f, -0.3f);
    glEnd();


      glBegin(GL_QUADS);
  glColor3f(0.0f,0.2f,0.0f);
    glVertex2f(-0.35f, -0.28f);
    glVertex2f(-0.32f, -0.28f);
    glVertex2f(-0.32f, -0.3f);
    glVertex2f(-0.35f, -0.3f);
    glEnd();
    //wings
      glBegin(GL_QUADS);
	  glColor3f(0.7f,0.5f,0.1f);
    glVertex2f(-0.15f, -0.32f);
    glVertex2f(-0.2f, -0.42f);
    glVertex2f(-0.15f, -0.42f);
    glVertex2f(-0.1f, -0.33f);
    glEnd();

      glBegin(GL_QUADS);
	 glColor3f(0.7f,0.5f,0.1f);
    glVertex2f(-0.36f, -0.27f);
    glVertex2f(-0.43f, -0.2);
    glVertex2f(-0.38f, -0.2f);
    glVertex2f(-0.31f, -0.27f);

    glEnd();



  glPopMatrix();





    //bus1
    glPushMatrix();
	glTranslatef(_move, 0.0f, 0.0f);
    glBegin(GL_POLYGON);
	glColor3f(0.5f,0.0f,0.0f);
	glVertex2f(-0.9f,-0.42f);
	glVertex2f(-0.9f,-0.55f);
	glVertex2f(-0.5f,-0.55);
    glVertex2f(-0.5f,-0.42);
	glEnd();

    //window
    glBegin(GL_QUADS);
	glColor3f(0.5f,0.8f,1.0f);
	glVertex2f(-.87f,-.47f);
	glVertex2f(-.87f,-.53f);
	glVertex2f(-.82f,-.53f);
	glVertex2f(-.82f,-.47f);
	glEnd();

     glBegin(GL_QUADS);
  glColor3f(0.5f,0.8f,1.0f);
	glVertex2f(-.80f,-.47f);
	glVertex2f(-.80f,-.53f);
	glVertex2f(-.75f,-.53f);
	glVertex2f(-.75f,-.47f);
	glEnd();


     glBegin(GL_QUADS);
	glColor3f(0.5f,0.8f,1.0f);
	glVertex2f(-.73f,-.47f);
	glVertex2f(-.73f,-.53f);
	glVertex2f(-.68f,-.53f);
	glVertex2f(-.68f,-.47f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0.5f,0.8f,1.0f);
	glVertex2f(-.66f,-.47f);
	glVertex2f(-.66f,-.53f);
	glVertex2f(-.61f,-.53f);
	glVertex2f(-.61f,-.47f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0.5f,0.8f,1.0f);
	glVertex2f(-.59f,-.47f);
	glVertex2f(-.59f,-.53f);
	glVertex2f(-.51f,-.53f);
	glVertex2f(-.51f,-.47f);
	glEnd();
//body//
    glBegin(GL_QUADS);
	glColor3f(0.5f,0.3f,0.0f);
	glVertex2f(-.9f,-.55f);
	glVertex2f(-.9f,-.65f);
	glVertex2f(-.5f,-.65);
	glVertex2f(-.5f,-.55f);
	glEnd();

//wheel
    glTranslatef(-.82f, -.65f, 0.0f);
	glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3f(0.0f,0.0f,0.0f);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.04;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x,y );
        }


	glEnd();


//Wheel 2
    glTranslatef(.25f, 0.0f, 0.0f);
	glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
           glColor3f(0.0f,0.0f,0.0f);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.04;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x,y );
        }
	glEnd();

	glPopMatrix();

//bus2

    glPushMatrix();
    glTranslatef(bus_position2,0.0f, 0.0f);

    glBegin(GL_POLYGON);
	glColor3f(0.1f,0.5f,0.8f);
	glVertex2f(.95f,-.77f);
	glVertex2f(.55f,-.77f);
	glVertex2f(.55f,-.88f);
	glVertex2f(.95f,-.88f);
	glEnd();

    glBegin(GL_POLYGON);
	glColor3f(0.1f,0.0f,0.8f);
	glVertex2f(.95f,-.78f);
	glVertex2f(.55f,-.78f);
	glVertex2f(.55f,-.61f);
	glVertex2f(.95f,-.61f);
	glEnd();
//window
    glBegin(GL_QUADS);
	glColor3f(0.9f,0.2f,0.2f);
	glVertex2f(.56f,-.68f);
	glVertex2f(.56f,-.76f);
	glVertex2f(.67f,-.76f);
	glVertex2f(.67f,-.68f);
	glEnd();


	glBegin(GL_QUADS);
	glColor3f(0.9f,0.2f,0.2f);
	glVertex2f(.69f,-.68f);
	glVertex2f(.69f,-.76f);
	glVertex2f(.75f,-.76f);
	glVertex2f(.75f,-.68f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0.9f,0.2f,0.2f);
	glVertex2f(.77f,-.68f);
	glVertex2f(.77f,-.76f);
	glVertex2f(.84f,-.76f);
	glVertex2f(.84f,-.68f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0.9f,0.2f,0.2f);
	glVertex2f(.86,-.68f);
	glVertex2f(.86f,-.76f);
	glVertex2f(.93f,-.76f);
	glVertex2f(.93f,-.68f);
	glEnd();

	//wheel
    glTranslatef(.63f, -.89f, 0.0f);
	glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3f(0.0f,0.0f,0.0f);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.04;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x,y );
        }


	glEnd();


//Wheel 2
    glTranslatef(.25f, 0.0f, 0.0f);
	glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3f(0.0f,0.0f,0.0f);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.04;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x,y );
        }
	glEnd();

	glPopMatrix();
	glFlush();
	glutSwapBuffers();
}

//Functions:
void cloud_update1(int value) {

    if(cloud_position1 >1.8)
        cloud_position1 = -1.0f;

    cloud_position1 += cloud_speed;

	glutPostRedisplay();


	glutTimerFunc(100, cloud_update1, 0);
}

void updatebus1(int value) {

    _move += .02;
    if(_move-1.3 > 1.0)
    {
        _move = -1.0;
    }
	glutPostRedisplay(); //Notify GLUT that the display has changed

	glutTimerFunc(100, updatebus1, 0); //Notify GLUT to call update again in 25 milliseconds
}
void updatebus2(int value) {

    if(bus_position2 <-2.0f)
        bus_position2 = 1.3f;

    bus_position2 -= bus_speed2;

	glutPostRedisplay();


	glutTimerFunc(100, updatebus2, 0);
}

    void plane_update1(int value) {

    if(plane_position1 >2.0)
        plane_position1 = -1.5f;

    plane_position1 += plane_speed1;

	glutPostRedisplay();


	glutTimerFunc(50, plane_update1, 0);
}

void ship_update1(int value) {

    if(ship_position1 <-1.0)
        ship_position1 = 1.0f;

    ship_position1 -= ship_speed1;

	glutPostRedisplay();


	glutTimerFunc(100, ship_update1, 0);
}



int main(int argc, char** argv) {

	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
	glutInitWindowSize(1000, 500);
	gluOrtho2D(50,45,-50,-45);
	glutCreateWindow("Airport");
	glutDisplayFunc(night);
    glutTimerFunc(100, cloud_update1, 0);
    cloud_speed = 0.015f;

    glutTimerFunc(100, updatebus1, 0);
    _move = 0.01f;
      glutTimerFunc(50, plane_update1, 0);
    plane_speed1 = 0.01f;
    glutTimerFunc(100, updatebus2, 0);
    bus_speed2 = 0.02f;
    glutTimerFunc(100, ship_update1, 0);
    ship_speed1 = 0.01f;


	glutMainLoop();
	return 0;
}

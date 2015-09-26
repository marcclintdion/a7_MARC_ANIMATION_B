/*glPushMatrix();

   glTranslatef(moveSet[0], -moveSet[2], 0.0f);  
   glTranslatef(keyboardLeft_ShadowsPosition_00[0], keyboardLeft_ShadowsPosition_00[1], keyboardLeft_ShadowsPosition_00[2]); 
   glRotatef(keyboardLeft_ShadowsRotationUP_DOWN_00, 1, 0, 0); 
   glRotatef(keyboardLeft_ShadowsRotationLEFT_RIGHT_00, 0, 0, 1);     
   glRotatef(keyboardLeft_ROTATION[3], keyboardLeft_ROTATION[0], keyboardLeft_ROTATION[1], keyboardLeft_ROTATION[2]);
   glScalef(scale_keyboardLeft_Shadow_00, 1.0, scale_keyboardLeft_Shadow_00); 
glPopMatrix();*/

   //glColor4f(0.7, 0.7, 0.7, 1.0);      

   glBindBufferARB(GL_ARRAY_BUFFER_ARB, keyboardLeft_vboID);

   glEnableClientState(GL_TEXTURE_COORD_ARRAY );
   glEnableClientState(GL_NORMAL_ARRAY);
   glEnableClientState(GL_VERTEX_ARRAY);
   glTexCoordPointer(3, GL_FLOAT, 0, (void*)(sizeof(keyboardLeft_VERT) + sizeof(keyboardLeft_NORM)));
   glNormalPointer(GL_FLOAT, 0, (void*)sizeof(keyboardLeft_VERT));
   glVertexPointer(3, GL_FLOAT, 0, 0);

   glDrawArrays(GL_TRIANGLES, 0, 6);
   glDisableClientState(GL_VERTEX_ARRAY);
   glDisableClientState(GL_NORMAL_ARRAY);
   glDisableClientState(GL_TEXTURE_COORD_ARRAY);


#pragma once

#ifdef __cplusplus
extern "C"{
#endif 

unsigned int TCF_RGB();
unsigned int TC_Init();
unsigned int TC_Shutdown();

const char * TC_RESET();
const char * TC_UNDERLINE();
const char * TC_NOUNDERLINE();
const char * TC_NORMAL();
const char * TC_INVERSE();

const char * TCF_RED();
const char * TCF_BLUE();
const char * TCF_PINK();
const char * TCF_GRAY();
const char * TCF_LIGHT_BLUE();
const char * TCF_GREEN();
const char * TCF_YELLOW();
const char * TCF_WHITE();
const char * TCF_ORANGE();

const char * TCB_BLACK();
const char * TCB_RED();
const char * TCB_BLUE();
const char * TCB_PINK();
const char * TCB_GRAY();
const char * TCB_LIGHT_BLUE();
const char * TCB_GREEN();
const char * TCB_YELLOW();
const char * TCB_WHITE();
const char * TCB_ORANGE();


#ifdef __cplusplus
}
#endif
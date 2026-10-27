// Function : AudioParameterInt
// Namespace: juce:AudioParameterInt
// Entry    : 004d03a0
// Prototype: undefined AudioParameterInt(AudioParameterInt * this, long * param_1, long * param_2, int param_3, int param_4, int param_5, long * param_6)
// Body     : 004d03a0 - 004d063a


/* juce::AudioParameterInt::AudioParameterInt(juce::ParameterID const&, juce::String const&, int,
   int, int, juce::AudioParameterIntAttributes const&) */

void __thiscall
juce::AudioParameterInt::AudioParameterInt
          (AudioParameterInt *this,long *param_1,long *param_2,int param_3,int param_4,int param_5,
          long *param_6)

{
  AudioParameterInt *pAVar1;
  long lVar2;
  code *pcVar3;
  int *piVar4;
  float fVar5;
  pthread_mutexattr_t local_38 [2];
  
  lVar2 = param_1[1];
  *(undefined ***)this = &PTR__AudioProcessorParameter_00714218;
  *(undefined4 *)(this + 8) = 0xffffffff;
  *(int *)(this + 0xc) = (int)lVar2;
  pthread_mutexattr_init(local_38);
  pthread_mutexattr_settype(local_38,1);
  pthread_mutexattr_setprotocol(local_38,1);
  pthread_mutex_init((pthread_mutex_t *)(this + 0x10),local_38);
  pthread_mutexattr_destroy(local_38);
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined ***)this = &PTR__AudioProcessorParameterWithID_00714588;
  lVar2 = *param_1;
  *(long *)(this + 0x60) = lVar2;
  piVar4 = (int *)(lVar2 + -0x10);
  if (piVar4 != &emptyString) {
    LOCK();
    *piVar4 = *piVar4 + 1;
    UNLOCK();
  }
  lVar2 = *param_2;
  *(long *)(this + 0x68) = lVar2;
  piVar4 = (int *)(lVar2 + -0x10);
  if (piVar4 != &emptyString) {
    LOCK();
    *piVar4 = *piVar4 + 1;
    UNLOCK();
  }
  lVar2 = *param_6;
  *(long *)(this + 0x70) = lVar2;
  piVar4 = (int *)(lVar2 + -0x10);
  if (piVar4 != &emptyString) {
    LOCK();
    *piVar4 = *piVar4 + 1;
    UNLOCK();
  }
  *(int *)(this + 0x78) = (int)param_6[1];
  this[0x7c] = *(AudioParameterInt *)((long)param_6 + 0xc);
  this[0x7d] = *(AudioParameterInt *)((long)param_6 + 0xd);
  this[0x7e] = *(AudioParameterInt *)((long)param_6 + 0xe);
  *(undefined ***)this = &PTR__AudioParameterInt_007146e8;
  *(float *)(this + 0x80) = (float)param_3;
  *(float *)(this + 0x84) = (float)param_4;
  this[0x90] = (AudioParameterInt)0x0;
  *(code **)(this + 0xb0) =
       std::
       _Function_handler<float(float,float,float),juce::AudioParameterInt::AudioParameterInt(juce::ParameterID_const&,juce::String_const&,int,int,int,juce::AudioParameterIntAttributes_const&)::$_8::operator()()const::{lambda(float,float,float)#1}>
       ::_M_invoke;
  *(undefined8 *)(this + 0x98) = 0;
  *(undefined8 *)(this + 0xa0) = 0;
  *(code **)(this + 0xa8) =
       std::
       _Function_handler<float(float,float,float),juce::AudioParameterInt::AudioParameterInt(juce::ParameterID_const&,juce::String_const&,int,int,int,juce::AudioParameterIntAttributes_const&)::$_8::operator()()const::{lambda(float,float,float)#1}>
       ::_M_manager;
  *(code **)(this + 0xd0) =
       std::
       _Function_handler<float(float,float,float),juce::AudioParameterInt::AudioParameterInt(juce::ParameterID_const&,juce::String_const&,int,int,int,juce::AudioParameterIntAttributes_const&)::$_8::operator()()const::{lambda(float,float,float)#2}>
       ::_M_invoke;
  *(undefined8 *)(this + 0xb8) = 0;
  *(undefined8 *)(this + 0xc0) = 0;
  *(code **)(this + 200) =
       std::
       _Function_handler<float(float,float,float),juce::AudioParameterInt::AudioParameterInt(juce::ParameterID_const&,juce::String_const&,int,int,int,juce::AudioParameterIntAttributes_const&)::$_8::operator()()const::{lambda(float,float,float)#2}>
       ::_M_manager;
  *(code **)(this + 0xf0) =
       std::
       _Function_handler<float(float,float,float),juce::AudioParameterInt::AudioParameterInt(juce::ParameterID_const&,juce::String_const&,int,int,int,juce::AudioParameterIntAttributes_const&)::$_8::operator()()const::{lambda(float,float,float)#3}>
       ::_M_invoke;
  *(undefined8 *)(this + 0xd8) = 0;
  *(undefined8 *)(this + 0xe0) = 0;
  *(code **)(this + 0xe8) =
       std::
       _Function_handler<float(float,float,float),juce::AudioParameterInt::AudioParameterInt(juce::ParameterID_const&,juce::String_const&,int,int,int,juce::AudioParameterIntAttributes_const&)::$_8::operator()()const::{lambda(float,float,float)#3}>
       ::_M_manager;
  *(undefined8 *)(this + 0x88) = 0x3f8000003f800000;
  *(float *)(this + 0xf8) = (float)param_5;
  fVar5 = RangedAudioParameter::convertTo0to1
                    ((ulong)(uint)(float)param_5,(RangedAudioParameter *)this);
  *(float *)(this + 0xfc) = fVar5;
  pAVar1 = this + 0x100;
  if (param_6[4] == 0) {
    *(undefined8 *)pAVar1 = 0;
    *(undefined8 *)(this + 0x108) = 0;
    *(code **)(this + 0x118) =
         std::
         _Function_handler<juce::String(int,int),juce::AudioParameterInt::AudioParameterInt(juce::ParameterID_const&,juce::String_const&,int,int,int,juce::AudioParameterIntAttributes_const&)::$_9>
         ::_M_invoke;
    pcVar3 = std::
             _Function_handler<juce::String(int,int),juce::AudioParameterInt::AudioParameterInt(juce::ParameterID_const&,juce::String_const&,int,int,int,juce::AudioParameterIntAttributes_const&)::$_9>
             ::_M_manager;
  }
  else {
    *(undefined8 *)(this + 0x110) = 0;
    *(undefined8 *)(this + 0x118) = 0;
    *(undefined8 *)pAVar1 = 0;
    *(undefined8 *)(this + 0x108) = 0;
    if ((code *)param_6[4] == (code *)0x0) goto LAB_004d05c8;
                    /* try { // try from 004d058a to 004d0593 has its CatchHandler @ 004d0682 */
    (*(code *)param_6[4])(pAVar1,param_6 + 2,2);
    *(long *)(this + 0x118) = param_6[5];
    pcVar3 = (code *)param_6[4];
  }
  *(code **)(this + 0x110) = pcVar3;
LAB_004d05c8:
  pAVar1 = this + 0x120;
  if (param_6[8] == 0) {
    *(undefined8 *)pAVar1 = 0;
    *(undefined8 *)(this + 0x128) = 0;
    *(code **)(this + 0x138) =
         std::
         _Function_handler<int(juce::String_const&),juce::AudioParameterInt::AudioParameterInt(juce::ParameterID_const&,juce::String_const&,int,int,int,juce::AudioParameterIntAttributes_const&)::$_10>
         ::_M_invoke;
    pcVar3 = std::
             _Function_handler<int(juce::String_const&),juce::AudioParameterInt::AudioParameterInt(juce::ParameterID_const&,juce::String_const&,int,int,int,juce::AudioParameterIntAttributes_const&)::$_10>
             ::_M_manager;
  }
  else {
    *(undefined8 *)(this + 0x130) = 0;
    *(undefined8 *)(this + 0x138) = 0;
    *(undefined8 *)pAVar1 = 0;
    *(undefined8 *)(this + 0x128) = 0;
    if ((code *)param_6[8] == (code *)0x0) {
      return;
    }
                    /* try { // try from 004d05ee to 004d05f7 has its CatchHandler @ 004d063b */
    (*(code *)param_6[8])(pAVar1,param_6 + 6,2);
    *(long *)(this + 0x138) = param_6[9];
    pcVar3 = (code *)param_6[8];
  }
  *(code **)(this + 0x130) = pcVar3;
  return;
}



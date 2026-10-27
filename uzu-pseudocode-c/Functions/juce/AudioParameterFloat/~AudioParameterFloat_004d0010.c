// Function : ~AudioParameterFloat
// Namespace: juce:AudioParameterFloat
// Entry    : 004d0010
// Prototype: undefined ~AudioParameterFloat(AudioParameterFloat * this)
// Body     : 004d0010 - 004d01a4


/* juce::AudioParameterFloat::~AudioParameterFloat() */

void __thiscall juce::AudioParameterFloat::~AudioParameterFloat(AudioParameterFloat *this)

{
  int iVar1;
  long lVar2;
  int *piVar3;
  
  *(undefined ***)this = &PTR__AudioParameterFloat_00714630;
  if (*(code **)(this + 0x130) != (code *)0x0) {
                    /* try { // try from 004d0035 to 004d003e has its CatchHandler @ 004d01c5 */
    (**(code **)(this + 0x130))(this + 0x120,this + 0x120,3);
  }
  if (*(code **)(this + 0x110) != (code *)0x0) {
                    /* try { // try from 004d0052 to 004d005b has its CatchHandler @ 004d01bd */
    (**(code **)(this + 0x110))(this + 0x100,this + 0x100,3);
  }
  if (*(code **)(this + 0xe8) != (code *)0x0) {
                    /* try { // try from 004d006f to 004d0078 has its CatchHandler @ 004d01b5 */
    (**(code **)(this + 0xe8))(this + 0xd8,this + 0xd8,3);
  }
  if (*(code **)(this + 200) != (code *)0x0) {
                    /* try { // try from 004d008c to 004d0095 has its CatchHandler @ 004d01ad */
    (**(code **)(this + 200))(this + 0xb8,this + 0xb8,3);
  }
  if (*(code **)(this + 0xa8) != (code *)0x0) {
                    /* try { // try from 004d00a9 to 004d00b2 has its CatchHandler @ 004d01a5 */
    (**(code **)(this + 0xa8))(this + 0x98,this + 0x98,3);
  }
  *(undefined ***)this = &PTR__AudioProcessorParameterWithID_00714588;
  piVar3 = (int *)(*(long *)(this + 0x70) + -0x10);
  if (piVar3 != &emptyString) {
    LOCK();
    iVar1 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      operator_delete__(piVar3);
    }
  }
  piVar3 = (int *)(*(long *)(this + 0x68) + -0x10);
  if (piVar3 != &emptyString) {
    LOCK();
    iVar1 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      operator_delete__(piVar3);
    }
  }
  piVar3 = (int *)(*(long *)(this + 0x60) + -0x10);
  if (piVar3 != &emptyString) {
    LOCK();
    iVar1 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      operator_delete__(piVar3);
    }
  }
  *(undefined ***)this = &PTR__AudioProcessorParameter_00714218;
  if (0 < *(int *)(this + 0x5c)) {
    lVar2 = 0;
    do {
      piVar3 = (int *)(*(long *)(*(long *)(this + 0x50) + lVar2 * 8) + -0x10);
      if (piVar3 != &emptyString) {
        LOCK();
        iVar1 = *piVar3;
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (iVar1 == 0) {
          operator_delete__(piVar3);
        }
      }
      lVar2 = lVar2 + 1;
    } while (lVar2 < *(int *)(this + 0x5c));
  }
  *(undefined4 *)(this + 0x5c) = 0;
  free(*(void **)(this + 0x50));
  *(undefined4 *)(this + 0x44) = 0;
  free(*(void **)(this + 0x38));
  pthread_mutex_destroy((pthread_mutex_t *)(this + 0x10));
  return;
}



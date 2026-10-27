// Function : setTypeOfNextNewPlugin
// Namespace: juce:AudioProcessor
// Entry    : 004c7700
// Prototype: long * setTypeOfNextNewPlugin(undefined4 param_1)
// Body     : 004c7700 - 004c77a8


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::AudioProcessor::setTypeOfNextNewPlugin(juce::AudioProcessor::WrapperType) */

long * __cdecl juce::AudioProcessor::setTypeOfNextNewPlugin(undefined4 param_1)

{
  pthread_t pVar1;
  pthread_t *ppVar2;
  pthread_t *ppVar3;
  pthread_t *ppVar4;
  bool bVar5;
  
  pVar1 = pthread_self();
  for (ppVar3 = wrapperTypeBeingCreated; ppVar2 = wrapperTypeBeingCreated,
      ppVar3 != (pthread_t *)0x0; ppVar3 = (pthread_t *)ppVar3[1]) {
    ppVar2 = (pthread_t *)*ppVar3;
    if ((pthread_t *)pVar1 == ppVar2) goto LAB_004c779f;
  }
  do {
    ppVar3 = ppVar2;
    if (ppVar3 == (pthread_t *)0x0) {
                    /* try { // try from 004c7752 to 004c775b has its CatchHandler @ 004c77a9 */
      ppVar3 = operator_new(0x18);
      ppVar2 = wrapperTypeBeingCreated;
      *ppVar3 = pVar1;
      ppVar3[1] = (pthread_t)ppVar2;
      *(undefined4 *)(ppVar3 + 2) = 0;
      LOCK();
      bVar5 = ppVar2 == wrapperTypeBeingCreated;
      if (bVar5) {
        wrapperTypeBeingCreated = ppVar3;
      }
      else {
        ppVar2 = wrapperTypeBeingCreated;
      }
      UNLOCK();
      ppVar4 = wrapperTypeBeingCreated;
      while (wrapperTypeBeingCreated = ppVar4, !bVar5) {
        ppVar3[1] = (pthread_t)ppVar4;
        LOCK();
        bVar5 = ppVar4 == wrapperTypeBeingCreated;
        if (bVar5) {
          wrapperTypeBeingCreated = ppVar3;
        }
        else {
          ppVar4 = wrapperTypeBeingCreated;
        }
        UNLOCK();
        ppVar2 = ppVar4;
        ppVar4 = wrapperTypeBeingCreated;
      }
LAB_004c779f:
      *(undefined4 *)(ppVar3 + 2) = param_1;
      return (long *)ppVar2;
    }
    ppVar2 = (pthread_t *)0x0;
    LOCK();
    ppVar4 = (pthread_t *)*ppVar3;
    if (ppVar4 == (pthread_t *)0x0) {
      *ppVar3 = pVar1;
    }
    else {
      ppVar2 = ppVar4;
    }
    UNLOCK();
    if (ppVar4 == (pthread_t *)0x0) {
      *(undefined4 *)(ppVar3 + 2) = 0;
      goto LAB_004c779f;
    }
    ppVar2 = (pthread_t *)ppVar3[1];
  } while( true );
}



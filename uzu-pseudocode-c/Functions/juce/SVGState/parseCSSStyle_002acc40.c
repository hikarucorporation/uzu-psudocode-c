// Function : parseCSSStyle
// Namespace: juce:SVGState
// Entry    : 002acc40
// Prototype: undefined parseCSSStyle(long param_1, XmlElement * param_2)
// Body     : 002acc40 - 002acd1c


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::SVGState::parseCSSStyle(juce::SVGState::XmlPath const&) */

void __cdecl juce::SVGState::parseCSSStyle(long param_1,XmlElement *param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  int *piVar4;
  String *pSVar5;
  String *pSVar6;
  long local_20;
  long local_18;
  
  XmlElement::getAllSubText(&local_20,param_2);
                    /* try { // try from 002acc57 to 002acc6c has its CatchHandler @ 002acd42 */
  juce::String::appendCharPointer((String *)&local_20,&DAT_00658931,0x658932);
  local_18 = local_20;
  piVar4 = (int *)(local_20 + -0x10);
  if (piVar4 != &emptyString) {
    LOCK();
    *piVar4 = *piVar4 + 1;
    UNLOCK();
  }
  pSVar6 = (String *)(param_1 + 0x40);
                    /* try { // try from 002acc8f to 002acc9b has its CatchHandler @ 002acd1d */
  pSVar5 = juce::String::operator+=((String *)&local_18,pSVar6);
  lVar2 = *(long *)pSVar5;
  piVar4 = (int *)(lVar2 + -0x10);
  if (piVar4 != &emptyString) {
    LOCK();
    *piVar4 = *piVar4 + 1;
    UNLOCK();
  }
  lVar3 = *(long *)pSVar6;
  *(long *)pSVar6 = lVar2;
  piVar4 = (int *)(lVar3 + -0x10);
  if (piVar4 != &emptyString) {
    LOCK();
    iVar1 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      operator_delete__(piVar4);
    }
  }
  piVar4 = (int *)(local_18 + -0x10);
  if (piVar4 != &emptyString) {
    LOCK();
    iVar1 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      operator_delete__(piVar4);
    }
  }
  piVar4 = (int *)(local_20 + -0x10);
  if (piVar4 != &emptyString) {
    LOCK();
    iVar1 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      operator_delete__(piVar4);
      return;
    }
  }
  return;
}



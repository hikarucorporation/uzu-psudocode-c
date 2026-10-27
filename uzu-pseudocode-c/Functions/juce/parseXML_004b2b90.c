// Function : parseXML
// Namespace: juce
// Entry    : 004b2b90
// Prototype: undefined parseXML(juce * this, long * param_1)
// Body     : 004b2b90 - 004b2c31


/* juce::parseXML(juce::File const&) */

void __thiscall juce::parseXML(juce *this,long *param_1)

{
  long lVar1;
  int *piVar2;
  undefined1 *local_60;
  undefined8 local_58;
  undefined2 local_50;
  undefined1 *local_48;
  undefined1 *local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined2 local_28;
  undefined8 *local_20;
  
  local_60 = &DAT_0061ac58;
  local_58 = 0;
  local_50 = 0;
  local_48 = &DAT_0061ac58;
  local_40 = &DAT_0061ac58;
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0x100;
                    /* try { // try from 004b2bd9 to 004b2be2 has its CatchHandler @ 004b2c47 */
  local_20 = operator_new(0x18);
  *local_20 = &PTR__FileInputSource_00713268;
  lVar1 = *param_1;
  local_20[1] = lVar1;
  piVar2 = (int *)(lVar1 + -0x10);
  if (piVar2 != &emptyString) {
    LOCK();
    *piVar2 = *piVar2 + 1;
    UNLOCK();
  }
  *(undefined1 *)(local_20 + 2) = 0;
                    /* try { // try from 004b2c11 to 004b2c1d has its CatchHandler @ 004b2c32 */
  XmlDocument::getDocumentElement((XmlDocument *)this,(XmlDocument *)&local_60);
  XmlDocument::~XmlDocument((XmlDocument *)&local_60);
  return;
}



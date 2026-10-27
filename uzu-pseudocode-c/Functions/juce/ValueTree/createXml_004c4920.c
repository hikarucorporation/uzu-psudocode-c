// Function : createXml
// Namespace: juce:ValueTree
// Entry    : 004c4920
// Prototype: undefined8 * createXml(undefined8 * param_1, undefined8 * param_2)
// Body     : 004c4920 - 004c4942


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::ValueTree::createXml() const */

undefined8 * __cdecl juce::ValueTree::createXml(undefined8 *param_1,undefined8 *param_2)

{
  XmlElement *pXVar1;
  
  if ((SharedObject *)*param_2 == (SharedObject *)0x0) {
    *param_1 = 0;
    return param_1;
  }
  pXVar1 = SharedObject::createXml((SharedObject *)*param_2);
  *param_1 = pXVar1;
  return param_1;
}



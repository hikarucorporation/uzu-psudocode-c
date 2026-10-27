// Function : getText
// Namespace: juce:XmlElement
// Entry    : 004b36e0
// Prototype: undefined8 * getText(XmlElement * this)
// Body     : 004b36e0 - 004b37e2


/* juce::XmlElement::getText() const */

undefined8 * __thiscall juce::XmlElement::getText(XmlElement *this)

{
  undefined8 *puVar1;
  byte *pbVar2;
  uint uVar3;
  int iVar4;
  
  if ((getJuceXmlTextContentAttributeName()::result == '\0') &&
     (iVar4 = __cxa_guard_acquire(&getJuceXmlTextContentAttributeName()::result), iVar4 != 0)) {
                    /* try { // try from 004b37a5 to 004b37b7 has its CatchHandler @ 004b37e3 */
    juce::String::String((String *)&getJuceXmlTextContentAttributeName()::result,(byte *)0x65a4a6);
    __cxa_atexit(juce::String::~String,&getJuceXmlTextContentAttributeName()::result,&__dso_handle);
    __cxa_guard_release(&getJuceXmlTextContentAttributeName()::result);
  }
  pbVar2 = getJuceXmlTextContentAttributeName()::result;
  puVar1 = *(undefined8 **)(this + 0x10);
  while( true ) {
    if (puVar1 == (undefined8 *)0x0) {
      if ((getEmptyStringRef()::empty == '\0') &&
         (iVar4 = __cxa_guard_acquire(&getEmptyStringRef()::empty), iVar4 != 0)) {
        getEmptyStringRef()::empty = &DAT_0061ac58;
        __cxa_atexit(juce::String::~String,&getEmptyStringRef()::empty,&__dso_handle);
        __cxa_guard_release(&getEmptyStringRef()::empty);
      }
      return &getEmptyStringRef()::empty;
    }
    uVar3 = CharacterFunctions::compare<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
                      ((byte *)puVar1[1],pbVar2);
    if (uVar3 == 0) break;
    puVar1 = (undefined8 *)*puVar1;
  }
  return puVar1 + 2;
}



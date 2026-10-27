// Function : createTextElement
// Namespace: juce:XmlElement
// Entry    : 00497340
// Prototype: XmlElement * createTextElement(long * param_1)
// Body     : 00497340 - 0049741f


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::XmlElement::createTextElement(juce::String const&) */

XmlElement * __cdecl juce::XmlElement::createTextElement(long *param_1)

{
  int iVar1;
  XmlElement *this;
  int *piVar2;
  long local_20;
  
  this = operator_new(0x20);
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined1 **)(this + 0x18) = &DAT_0061ac58;
  if (getJuceXmlTextContentAttributeName()::result == '\0') {
    iVar1 = __cxa_guard_acquire(&getJuceXmlTextContentAttributeName()::result);
    if (iVar1 != 0) {
                    /* try { // try from 004973e2 to 004973f4 has its CatchHandler @ 00497420 */
      juce::String::String((String *)&getJuceXmlTextContentAttributeName()::result,(byte *)0x65a4a6)
      ;
      __cxa_atexit(juce::String::~String,&getJuceXmlTextContentAttributeName()::result,&__dso_handle
                  );
      __cxa_guard_release(&getJuceXmlTextContentAttributeName()::result);
    }
  }
  Identifier::Identifier((Identifier *)&local_20,&getJuceXmlTextContentAttributeName()::result);
                    /* try { // try from 00497390 to 0049739d has its CatchHandler @ 00497431 */
  setAttribute(this,&local_20,param_1);
  piVar2 = (int *)(local_20 + -0x10);
  if (piVar2 != &emptyString) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      operator_delete__(piVar2);
    }
  }
  return this;
}



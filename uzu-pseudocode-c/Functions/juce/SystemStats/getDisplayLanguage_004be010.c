// Function : getDisplayLanguage
// Namespace: juce:SystemStats
// Entry    : 004be010
// Prototype: undefined getDisplayLanguage(void)
// Body     : 004be010 - 004be09c


/* juce::SystemStats::getDisplayLanguage() */

void juce::SystemStats::getDisplayLanguage(void)

{
  int iVar1;
  int *piVar2;
  char *local_10;
  
  getLocaleValue((juce *)&detail::
                          lowLevelShape(juce::detail::SanitisedString_const&,juce::Range<long_long>,juce::Font_const&,juce::TextScript,unsigned_char)
                          ::language,0x90009);
                    /* try { // try from 004be026 to 004be034 has its CatchHandler @ 004be09d */
  getLocaleValue((juce *)&local_10,0x90003);
  if (*local_10 != '\0') {
                    /* try { // try from 004be03f to 004be069 has its CatchHandler @ 004be0a2 */
    juce::String::appendCharPointer
              ((String *)
               &detail::
                lowLevelShape(juce::detail::SanitisedString_const&,juce::Range<long_long>,juce::Font_const&,juce::TextScript,unsigned_char)
                ::language,&DAT_0065dc2b,0x65dc2c);
    juce::String::operator+=
              ((String *)
               &detail::
                lowLevelShape(juce::detail::SanitisedString_const&,juce::Range<long_long>,juce::Font_const&,juce::TextScript,unsigned_char)
                ::language,(String *)&local_10);
  }
  piVar2 = (int *)(local_10 + -0x10);
  if (piVar2 != &emptyString) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      operator_delete__(piVar2);
      return;
    }
  }
  return;
}



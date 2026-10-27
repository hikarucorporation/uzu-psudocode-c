// Function : getSystemRandom
// Namespace: juce:Random
// Entry    : 004a4b70
// Prototype: long getSystemRandom(void)
// Body     : 004a4b70 - 004a4bcf


/* juce::Random::getSystemRandom() */

long juce::Random::getSystemRandom(void)

{
  long lVar1;
  undefined8 local_10;
  
  lVar1 = __tls_get_addr(&PTR_007153d8);
  if (*(char *)(lVar1 + 0x98) == '\0') {
    local_10 = 1;
    setSeedRandomly((Random *)&local_10);
    *(undefined8 *)(lVar1 + 0x90) = local_10;
    *(undefined1 *)(lVar1 + 0x98) = 1;
    return lVar1 + 0x90;
  }
  return lVar1 + 0x90;
}



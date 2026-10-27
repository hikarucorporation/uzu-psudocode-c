// Function : LruCache
// Namespace: juce:LruCache_juce__String_juce__Array_juce__Unicode__Codepoint_juce__DummyCriticalSection_0__1~d3c7099d
// Entry    : 002eb0c0
// Prototype: undefined LruCache(void)
// Body     : 002eb0c0 - 002eb153


/* juce::LruCache<juce::String, juce::Array<juce::Unicode::Codepoint, juce::DummyCriticalSection,
   0>, 128ul>::LruCache() */

void juce::
     LruCache<juce::String,juce::Array<juce::Unicode::Codepoint,juce::DummyCriticalSection,0>,128ul>
     ::LruCache(void)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = __tls_get_addr(&PTR_007153d8);
  *(undefined4 *)(lVar1 + 0x18) = 0;
  *(undefined8 *)(lVar1 + 0x20) = 0;
  *(long *)(lVar1 + 0x28) = lVar1 + 0x18;
  *(long *)(lVar1 + 0x30) = lVar1 + 0x18;
  *(undefined8 *)(lVar1 + 0x38) = 0;
  *(long *)(lVar1 + 0x48) = lVar1 + 0x40;
  *(long *)(lVar1 + 0x40) = lVar1 + 0x40;
  *(undefined8 *)(lVar1 + 0x50) = 0;
  *(undefined4 *)(lVar1 + 0x58) = 0;
                    /* try { // try from 002eb12f to 002eb138 has its CatchHandler @ 002eb154 */
  puVar2 = operator_new(0x28);
  puVar2[2] = 0;
  puVar2[3] = 0;
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2[4] = 0;
  *(undefined8 **)(lVar1 + 0x60) = puVar2;
  return;
}



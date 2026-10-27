// Function : FontPlaceholderNames
// Namespace: juce:FontPlaceholderNames
// Entry    : 002f8a80
// Prototype: undefined FontPlaceholderNames(void)
// Body     : 002f8a80 - 002f8ba1


/* juce::FontPlaceholderNames::FontPlaceholderNames() */

void __thiscall juce::FontPlaceholderNames::FontPlaceholderNames(void)

{
  undefined4 *puVar1;
  
  puVar1 = operator_new__(0x27);
  LOCK();
  *puVar1 = 0;
  UNLOCK();
  *(undefined8 *)(puVar1 + 2) = 0x10;
  getFontPlaceholderNames()::names = puVar1 + 4;
  *(undefined8 *)(puVar1 + 4) = 0x65532d736e61533c;
  puVar1[6] = 0x3e666972;
  *(undefined1 *)(puVar1 + 7) = 0;
                    /* try { // try from 002f8ac0 to 002f8ac9 has its CatchHandler @ 002f8c18 */
  puVar1 = operator_new__(0x1f);
  LOCK();
  *puVar1 = 0;
  UNLOCK();
  *(undefined8 *)(puVar1 + 2) = 8;
  DAT_0071cd38 = puVar1 + 4;
  *(undefined8 *)(puVar1 + 4) = 0x3e66697265533c;
                    /* try { // try from 002f8af0 to 002f8af9 has its CatchHandler @ 002f8bea */
  puVar1 = operator_new__(0x27);
  LOCK();
  *puVar1 = 0;
  UNLOCK();
  *(undefined8 *)(puVar1 + 2) = 0x10;
  DAT_0071cd40 = puVar1 + 4;
  *(undefined8 *)(puVar1 + 4) = 0x6170736f6e6f4d3c;
  puVar1[6] = 0x3e646563;
  *(undefined1 *)(puVar1 + 7) = 0;
                    /* try { // try from 002f8b2f to 002f8b38 has its CatchHandler @ 002f8bbc */
  puVar1 = operator_new__(0x23);
  LOCK();
  *puVar1 = 0;
  UNLOCK();
  *(undefined8 *)(puVar1 + 2) = 0xc;
  DAT_0071cd48 = puVar1 + 4;
  *(undefined8 *)(puVar1 + 4) = 0x72616c756765523c;
  *(undefined2 *)(puVar1 + 6) = 0x3e;
                    /* try { // try from 002f8b65 to 002f8b6e has its CatchHandler @ 002f8ba2 */
  puVar1 = operator_new__(0x23);
  LOCK();
  *puVar1 = 0;
  UNLOCK();
  *(undefined8 *)(puVar1 + 2) = 0xc;
  *(undefined8 *)(puVar1 + 4) = 0x752d6d6574737973;
  *(undefined2 *)(puVar1 + 6) = 0x69;
  DAT_0071cd50 = puVar1 + 4;
  return;
}



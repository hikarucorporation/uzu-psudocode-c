// Function : getStringBounds
// Namespace: juce:GlyphArrangement
// Entry    : 001760d0
// Prototype: undefined8 getStringBounds(undefined8 * param_1, byte * param_2, undefined8 param_3, undefined8 param_4, uint * param_5, ulong param_6)
// Body     : 001760d0 - 00176192


/* WARNING: Unknown calling convention: __cdecl */
/* juce::GlyphArrangement::getStringBounds(juce::Font const&, juce::StringRef) */

undefined8 __cdecl
juce::GlyphArrangement::getStringBounds
          (undefined8 *param_1,byte *param_2,undefined8 param_3,undefined8 param_4,uint *param_5,
          ulong param_6)

{
  long lVar1;
  long lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  void *local_50;
  uint local_44;
  String local_40 [8];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  
  GlyphArrangement((GlyphArrangement *)&local_50);
                    /* try { // try from 001760e7 to 001760f3 has its CatchHandler @ 001761a4 */
  juce::String::String(local_40,param_2);
                    /* try { // try from 001760f4 to 0017610b has its CatchHandler @ 00176195 */
  uVar3 = 0;
  uVar4 = 0;
  uVar5 = 0;
  uVar6 = 0;
  addLineOfText(0.0,0.0,(GlyphArrangement *)&local_50,param_1,(ulong *)local_40);
  juce::String::~String(local_40);
                    /* try { // try from 0017611a to 0017612a has its CatchHandler @ 00176193 */
  local_28 = getBoundingBox((GlyphArrangement *)&local_50,0,(ulong)local_44,1,param_5,param_6);
  local_38 = uVar3;
  uStack_34 = uVar4;
  uStack_30 = uVar5;
  uStack_2c = uVar6;
  if (0 < (int)local_44) {
    lVar2 = 0;
    lVar1 = 0;
    do {
      Font::~Font((Font *)((long)local_50 + lVar2));
      lVar1 = lVar1 + 1;
      lVar2 = lVar2 + 0x20;
    } while (lVar1 < (int)local_44);
  }
  local_44 = 0;
  free(local_50);
  return local_28;
}



// Function : extractAllPdPatches
// Namespace: AudioPluginAudioProcessor
// Entry    : 0016f310
// Prototype: bool extractAllPdPatches(undefined8 param_1_00, undefined8 * param_2)
// Body     : 0016f310 - 0016f579


/* AudioPluginAudioProcessor::extractAllPdPatches(juce::File const&) */

bool __thiscall
AudioPluginAudioProcessor::extractAllPdPatches(undefined8 param_1_00,undefined8 *param_2)

{
  bool bVar1;
  undefined8 uVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  int local_b4;
  File local_b0 [8];
  ulong local_a8;
  String local_a0 [8];
  undefined8 *local_98;
  String local_90 [8];
  char *local_88 [2];
  char local_78 [16];
  byte *local_68;
  String local_60 [8];
  byte *local_58;
  byte *local_50;
  String local_48 [8];
  char *local_40;
  File local_38 [8];
  
                    /* try { // try from 0016f321 to 0016f32f has its CatchHandler @ 0016f57a */
  local_98 = param_2;
  juce::File::createDirectory(local_88,param_2);
  uVar2 = juce::Result::operator!((Result *)local_88);
  juce::String::~String((String *)local_88);
  bVar1 = false;
  if ((char)uVar2 == '\0') {
    local_a8 = 0;
    lVar5 = 0;
    do {
                    /* try { // try from 0016f391 to 0016f398 has its CatchHandler @ 0016f5e3 */
      juce::String::String(local_90,*(byte **)(PTR_namedResourceList_00715e50 + lVar5 * 8));
      juce::StringRef::StringRef((StringRef *)&local_40,&DAT_0061d16d);
      uVar2 = juce::String::endsWith(local_90,local_40);
      if ((char)uVar2 != '\0') {
        local_b4 = 0;
                    /* try { // try from 0016f3c3 to 0016f3cd has its CatchHandler @ 0016f5d4 */
        juce::String::toStdString_abi_cxx11_((long *)local_88,(undefined8 *)local_90);
                    /* try { // try from 0016f3d3 to 0016f3dc has its CatchHandler @ 0016f5bb */
        puVar3 = BinaryData::getNamedResource(local_88[0],&local_b4);
        if (local_88[0] != local_78) {
          operator_delete(local_88[0]);
        }
        if ((puVar3 != (undefined *)0x0) && (0 < local_b4)) {
                    /* try { // try from 0016f408 to 0016f41a has its CatchHandler @ 0016f5b9 */
          juce::String::dropLastCharacters((undefined8 *)local_48,(undefined8 *)local_90,3);
                    /* try { // try from 0016f41b to 0016f42c has its CatchHandler @ 0016f5aa */
          juce::operator+((juce *)local_88,local_48,".pd");
          juce::String::~String(local_48);
          juce::String::String(local_a0);
          bVar1 = juce::operator==((undefined8 *)local_88,(byte *)"EBPhaselock.pd");
          if (bVar1) {
            juce::StringRef::StringRef((StringRef *)&local_50,(undefined8 *)local_88);
                    /* try { // try from 0016f464 to 0016f475 has its CatchHandler @ 0016f580 */
            juce::File::getChildFile(local_b0,local_98,local_50);
            juce::File::operator=((File *)local_a0,(undefined8 *)local_b0);
          }
          else {
            juce::StringRef::StringRef((StringRef *)&local_58,"abstractions");
                    /* try { // try from 0016f4a1 to 0016f4b2 has its CatchHandler @ 0016f57e */
            juce::File::getChildFile(local_b0,local_98,local_58);
                    /* try { // try from 0016f4b3 to 0016f4cd has its CatchHandler @ 0016f582 */
            uVar2 = juce::File::exists(local_b0);
            if ((char)uVar2 == '\0') {
              juce::File::createDirectory((undefined8 *)local_60,(undefined8 *)local_b0);
              juce::String::~String(local_60);
            }
            juce::StringRef::StringRef((StringRef *)&local_68,(undefined8 *)local_88);
                    /* try { // try from 0016f4ea to 0016f501 has its CatchHandler @ 0016f57c */
            juce::File::getChildFile(local_38,(undefined8 *)local_b0,local_68);
            juce::File::operator=((File *)local_a0,(undefined8 *)local_38);
            juce::String::~String((String *)local_38);
          }
          juce::String::~String((String *)local_b0);
                    /* try { // try from 0016f527 to 0016f531 has its CatchHandler @ 0016f591 */
          uVar4 = juce::File::replaceWithData((File *)local_a0,puVar3,(long)local_b4);
          local_a8 = (ulong)((int)local_a8 + ((uint)uVar4 & 0xff));
          juce::String::~String(local_a0);
          juce::String::~String((String *)local_88);
        }
      }
      juce::String::~String(local_90);
      lVar5 = lVar5 + 1;
    } while (lVar5 != 10);
    bVar1 = 0 < (int)local_a8;
  }
  return bVar1;
}



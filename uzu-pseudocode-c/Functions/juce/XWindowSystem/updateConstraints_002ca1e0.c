// Function : updateConstraints
// Namespace: juce:XWindowSystem
// Entry    : 002ca1e0
// Prototype: undefined updateConstraints(XWindowSystem * this, undefined8 param_1, long * param_2)
// Body     : 002ca1e0 - 002ca396


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* juce::XWindowSystem::updateConstraints(unsigned long, juce::ComponentPeer&) const */

void __thiscall
juce::XWindowSystem::updateConstraints(XWindowSystem *this,undefined8 param_1,long *param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined4 extraout_EDX;
  undefined4 extraout_var;
  undefined8 uVar5;
  uint uVar6;
  double dVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  char local_60 [4];
  undefined8 local_5c;
  undefined8 local_54;
  undefined8 local_48;
  undefined8 uStack_40;
  
  if ((singletonHolder._40_8_ != 0) &&
     (lVar3 = *(long *)(singletonHolder._40_8_ + 0x148), lVar3 != 0)) {
    lVar2 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
    (**(code **)(lVar2 + 0x210))(lVar3);
  }
                    /* try { // try from 002ca21d to 002ca224 has its CatchHandler @ 002ca3ba */
  lVar3 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
  puVar4 = (undefined8 *)(**(code **)(lVar3 + 8))();
  if (puVar4 == (undefined8 *)0x0) goto LAB_002ca362;
  if ((*(byte *)(param_2 + 2) & 0x10) == 0) {
                    /* try { // try from 002ca241 to 002ca246 has its CatchHandler @ 002ca39b */
    (**(code **)(*param_2 + 0x48))(param_2);
    *(undefined4 *)(puVar4 + 4) = extraout_EDX;
    *(undefined4 *)(puVar4 + 3) = extraout_EDX;
                    /* try { // try from 002ca251 to 002ca256 has its CatchHandler @ 002ca399 */
    (**(code **)(*param_2 + 0x48))(param_2);
    *(undefined4 *)((long)puVar4 + 0x24) = extraout_var;
    *(undefined4 *)((long)puVar4 + 0x1c) = extraout_var;
LAB_002ca335:
    *puVar4 = 0x30;
  }
  else {
    lVar3 = param_2[5];
    if (lVar3 != 0) {
                    /* try { // try from 002ca278 to 002ca285 has its CatchHandler @ 002ca397 */
      (**(code **)(*param_2 + 0xb8))(local_60,param_2);
      if (local_60[0] == '\0') {
        local_5c = 0;
        uVar5 = 0;
      }
      else {
        uVar5 = local_54;
      }
      local_48 = CONCAT44((int)local_5c,(int)((ulong)local_5c >> 0x20));
      uStack_40 = 0;
      dVar7 = (double)(**(code **)(*param_2 + 0x130))(param_2);
      iVar1 = (int)((ulong)uVar5 >> 0x20);
      uVar6 = (int)(dVar7 * (double)*(int *)(lVar3 + 8)) - (iVar1 + (int)local_48);
      uVar8 = (int)((double)*(int *)(lVar3 + 0x10) * dVar7) - ((int)uVar5 + local_48._4_4_);
      uVar9 = (int)(dVar7 * (double)*(int *)(lVar3 + 0xc)) - (iVar1 + (int)local_48);
      uVar10 = (int)((double)*(int *)(lVar3 + 0x14) * dVar7) - ((int)uVar5 + local_48._4_4_);
      uVar11 = -(uint)(_DAT_0065a040 < (int)uVar6);
      uVar12 = -(uint)(_UNK_0065a044 < (int)uVar8);
      uVar13 = -(uint)(_UNK_0065a048 < (int)uVar9);
      uVar14 = -(uint)(_UNK_0065a04c < (int)uVar10);
      *(uint *)(puVar4 + 3) = (uVar6 & uVar11) + uVar11 + 1;
      *(uint *)((long)puVar4 + 0x1c) = (uVar8 & uVar12) + uVar12 + 1;
      *(uint *)(puVar4 + 4) = (uVar9 & uVar13) + uVar13 + 1;
      *(uint *)((long)puVar4 + 0x24) = (uVar10 & uVar14) + uVar14 + 1;
      goto LAB_002ca335;
    }
  }
                    /* try { // try from 002ca33c to 002ca353 has its CatchHandler @ 002ca3ad */
  lVar3 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
  (**(code **)(lVar3 + 0x318))(*(undefined8 *)(this + 0x148),param_1,puVar4);
                    /* try { // try from 002ca354 to 002ca361 has its CatchHandler @ 002ca3a5 */
  lVar3 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
  (**(code **)(lVar3 + 0x128))(puVar4);
LAB_002ca362:
  if ((singletonHolder._40_8_ != 0) &&
     (lVar3 = *(long *)(singletonHolder._40_8_ + 0x148), lVar3 != 0)) {
                    /* try { // try from 002ca37a to 002ca387 has its CatchHandler @ 002ca39d */
    lVar2 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
    (**(code **)(lVar2 + 0x360))(lVar3);
  }
  return;
}



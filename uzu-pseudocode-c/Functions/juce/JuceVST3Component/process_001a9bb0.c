// Function : process
// Namespace: juce:JuceVST3Component
// Entry    : 001a9bb0
// Prototype: undefined8 process(JuceVST3Component * this, int * param_1, undefined8 param_2, undefined8 param_3, uint * param_4, undefined8 param_5)
// Body     : 001a9bb0 - 001a9e9a


/* juce::JuceVST3Component::process(Steinberg::Vst::ProcessData&) */

undefined8 __thiscall
juce::JuceVST3Component::process
          (JuceVST3Component *this,int *param_1,undefined8 param_2,undefined8 param_3,uint *param_4,
          undefined8 param_5)

{
  JuceVST3Component *pJVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  float fVar5;
  undefined8 *puVar6;
  int *piVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  byte bVar15;
  int iVar16;
  long *plVar17;
  long lVar18;
  int iVar19;
  undefined8 extraout_RDX;
  int iVar20;
  long *plVar21;
  ulong uVar22;
  undefined1 *puVar23;
  long lVar24;
  undefined8 uVar25;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  CriticalSection *local_50;
  char local_48;
  long local_40;
  ulong local_38;
  
  FLStudioDIYSpecificationEnforcementLock::FLStudioDIYSpecificationEnforcementLock
            ((FLStudioDIYSpecificationEnforcementLock *)&local_50,(CriticalSection *)(this + 1000),
             param_2,param_3,param_4,param_5);
  uVar25 = 1;
  if ((*(long *)(this + 0x68) == 0) ||
     ((*(int *)(this + 0xfc) != 1) == (*(int *)(*(long *)(this + 0x68) + 0x44) == 1)))
  goto LAB_001a9e43;
  puVar6 = *(undefined8 **)(param_1 + 0x12);
  pJVar1 = this + 0x88;
  if (puVar6 == (undefined8 *)0x0) {
    *(undefined8 *)(this + 0xe8) = 0;
    *(undefined8 *)(this + 0xf0) = 0;
    *(undefined8 *)(this + 0xd8) = 0;
    *(undefined8 *)(this + 0xe0) = 0;
    *(undefined8 *)(this + 200) = 0;
    *(undefined8 *)(this + 0xd0) = 0;
    *(undefined8 *)(this + 0xb8) = 0;
    *(undefined8 *)(this + 0xc0) = 0;
    *(undefined8 *)(this + 0xa8) = 0;
    *(undefined8 *)(this + 0xb0) = 0;
    *(undefined8 *)(this + 0x98) = 0;
    *(undefined8 *)(this + 0xa0) = 0;
    *(undefined8 *)pJVar1 = 0;
    *(undefined8 *)(this + 0x90) = 0;
    lVar18 = *(long *)(this + 0x80);
    if (lVar18 != 0) {
      bVar15 = 0;
      goto LAB_001a9c87;
    }
  }
  else {
    uVar8 = puVar6[0xd];
    *(undefined8 *)(this + 0xe8) = puVar6[0xc];
    *(undefined8 *)(this + 0xf0) = uVar8;
    uVar8 = puVar6[0xb];
    *(undefined8 *)(this + 0xd8) = puVar6[10];
    *(undefined8 *)(this + 0xe0) = uVar8;
    uVar8 = puVar6[9];
    *(undefined8 *)(this + 200) = puVar6[8];
    *(undefined8 *)(this + 0xd0) = uVar8;
    uVar8 = *puVar6;
    uVar9 = puVar6[1];
    uVar10 = puVar6[2];
    uVar11 = puVar6[3];
    uVar12 = puVar6[4];
    uVar13 = puVar6[5];
    uVar14 = puVar6[7];
    *(undefined8 *)(this + 0xb8) = puVar6[6];
    *(undefined8 *)(this + 0xc0) = uVar14;
    *(undefined8 *)(this + 0xa8) = uVar12;
    *(undefined8 *)(this + 0xb0) = uVar13;
    *(undefined8 *)(this + 0x98) = uVar10;
    *(undefined8 *)(this + 0xa0) = uVar11;
    *(undefined8 *)pJVar1 = uVar8;
    *(undefined8 *)(this + 0x90) = uVar9;
    lVar18 = *(long *)(this + 0x80);
    if (lVar18 != 0) {
      bVar15 = (byte)*pJVar1 >> 1 & 1;
LAB_001a9c87:
      LOCK();
      *(byte *)(lVar18 + 0x62b1) = bVar15;
      UNLOCK();
    }
  }
  MidiBuffer::clear((MidiBuffer *)(this + 0x110));
  plVar21 = *(long **)(param_1 + 10);
  if (plVar21 != (long *)0x0) {
                    /* try { // try from 001a9ca2 to 001a9d4d has its CatchHandler @ 001a9eac */
    processParameterChanges(this,plVar21);
  }
  if (detail::PluginUtilities::getHostType()::hostType == '\0') {
    puVar23 = &detail::PluginUtilities::getHostType()::hostType;
    iVar19 = __cxa_guard_acquire();
    if (iVar19 != 0) {
                    /* try { // try from 001a9e7f to 001a9e83 has its CatchHandler @ 001a9e9b */
      detail::PluginUtilities::getHostType()::hostType =
           PluginHostType::getHostType(puVar23,plVar21,extraout_RDX,lVar18,param_4,param_5);
      __cxa_guard_release(&detail::PluginUtilities::getHostType()::hostType);
    }
  }
  if (detail::PluginUtilities::getHostType()::hostType - 0x35U < 5) {
    piVar7 = *(int **)(param_1 + 6);
    iVar16 = 0;
    iVar19 = 0;
    if ((piVar7 != (int *)0x0) && (iVar19 = 0, *(long *)(piVar7 + 4) != 0)) {
      iVar19 = *piVar7;
    }
    piVar7 = *(int **)(param_1 + 8);
    if ((piVar7 != (int *)0x0) && (*(long *)(piVar7 + 4) != 0)) {
      iVar16 = *piVar7;
    }
    iVar4 = *(int *)(*(long *)(this + 0x68) + 0xf4);
    piVar7 = (int *)(*(long *)(this + 0x68) + 0xf0);
    iVar20 = iVar4 + *piVar7;
    if ((iVar20 != 0 && SCARRY4(iVar4,*piVar7) == iVar20 < 0) && (iVar19 == -iVar16))
    goto LAB_001a9e43;
  }
  if ((param_1[2] != 0) || ((param_1[3] != 0 || (param_1[4] != 0)))) {
    if (*(int *)(this + 0xfc) == 1) {
      processAudio<double>(this,param_1);
    }
    else if (*(int *)(this + 0xfc) == 0) {
      processAudio<float>(this,param_1);
    }
  }
  plVar21 = *(long **)(param_1 + 0xc);
  uVar25 = 0;
  if (plVar21 != (long *)0x0) {
    lVar18 = *(long *)(this + 0x78);
    lVar24 = *(long *)(lVar18 + 0x48);
    if (*(long *)(lVar18 + 0x50) != lVar24) {
      local_40 = 0;
      iVar19 = 0;
      uVar22 = 0;
      do {
        LOCK();
        puVar2 = (uint *)(lVar24 + uVar22 * 4);
        uVar3 = *puVar2;
        *puVar2 = 0;
        UNLOCK();
        lVar24 = 0;
        local_38 = uVar22;
        do {
          if ((uVar3 >> ((uint)lVar24 & 0x1f) & 1) != 0) {
            fVar5 = *(float *)(*(long *)(lVar18 + 0x30) + local_40 + lVar24 * 4);
            local_54 = *(undefined4 *)(*(long *)(lVar18 + 0x18) + (long)iVar19 * 4 + lVar24 * 4);
            local_58 = 0;
                    /* try { // try from 001a9e08 to 001a9e3d has its CatchHandler @ 001a9eae */
            plVar17 = (long *)(**(code **)(*plVar21 + 0x28))(plVar21,&local_54,&local_58);
            if (plVar17 != (long *)0x0) {
              local_5c = 0;
              (**(code **)(*plVar17 + 0x30))((double)fVar5,plVar17,0,&local_5c);
            }
          }
          lVar24 = lVar24 + 1;
        } while (lVar24 != 0x20);
        uVar22 = local_38 + 1;
        lVar24 = *(long *)(lVar18 + 0x48);
        iVar19 = iVar19 + 0x20;
        local_40 = local_40 + 0x80;
      } while (uVar22 < (ulong)(*(long *)(lVar18 + 0x50) - lVar24 >> 2));
      uVar25 = 0;
    }
  }
LAB_001a9e43:
  if (local_48 != '\0') {
    local_48 = 0;
    CriticalSection::exit(local_50);
  }
  return uVar25;
}



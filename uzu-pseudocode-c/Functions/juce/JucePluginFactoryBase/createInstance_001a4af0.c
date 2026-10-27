// Function : createInstance
// Namespace: juce:JucePluginFactoryBase
// Entry    : 001a4af0
// Prototype: undefined8 createInstance(JucePluginFactoryBase * this, char * param_1, undefined8 * param_2, undefined8 * param_3)
// Body     : 001a4af0 - 001a4c50


/* juce::JucePluginFactoryBase::createInstance(char const*, char const*, void**) */

undefined8 __thiscall
juce::JucePluginFactoryBase::createInstance
          (JucePluginFactoryBase *this,char *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  long *plVar4;
  undefined1 *puVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined **local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  
  *param_3 = 0;
  local_50 = &PTR__FUID_00704de0;
  uVar1 = *param_2;
  uVar2 = param_2[1];
  if (param_1 == (char *)0x0) {
    return 2;
  }
  if (param_2 == (undefined8 *)0x0) {
    return 2;
  }
  local_48._0_1_ = (char)uVar1;
  local_48._1_1_ = (char)((ulong)uVar1 >> 8);
  local_48._2_1_ = (char)((ulong)uVar1 >> 0x10);
  local_48._3_1_ = (char)((ulong)uVar1 >> 0x18);
  local_48._4_1_ = (char)((ulong)uVar1 >> 0x20);
  local_48._5_1_ = (char)((ulong)uVar1 >> 0x28);
  local_48._6_1_ = (char)((ulong)uVar1 >> 0x30);
  local_48._7_1_ = (char)((ulong)uVar1 >> 0x38);
  uStack_40._0_1_ = (char)uVar2;
  uStack_40._1_1_ = (char)((ulong)uVar2 >> 8);
  uStack_40._2_1_ = (char)((ulong)uVar2 >> 0x10);
  uStack_40._3_1_ = (char)((ulong)uVar2 >> 0x18);
  uStack_40._4_1_ = (char)((ulong)uVar2 >> 0x20);
  uStack_40._5_1_ = (char)((ulong)uVar2 >> 0x28);
  uStack_40._6_1_ = (char)((ulong)uVar2 >> 0x30);
  uStack_40._7_1_ = (char)((ulong)uVar2 >> 0x38);
  auVar6[0] = -((char)local_48 == '\0');
  auVar6[1] = -(local_48._1_1_ == '\0');
  auVar6[2] = -(local_48._2_1_ == '\0');
  auVar6[3] = -(local_48._3_1_ == '\0');
  auVar6[4] = -(local_48._4_1_ == '\0');
  auVar6[5] = -(local_48._5_1_ == '\0');
  auVar6[6] = -(local_48._6_1_ == '\0');
  auVar6[7] = -(local_48._7_1_ == '\0');
  auVar6[8] = -((char)uStack_40 == '\0');
  auVar6[9] = -(uStack_40._1_1_ == '\0');
  auVar6[10] = -(uStack_40._2_1_ == '\0');
  auVar6[0xb] = -(uStack_40._3_1_ == '\0');
  auVar6[0xc] = -(uStack_40._4_1_ == '\0');
  auVar6[0xd] = -(uStack_40._5_1_ == '\0');
  auVar6[0xe] = -(uStack_40._6_1_ == '\0');
  auVar6[0xf] = -(uStack_40._7_1_ == '\0');
  if ((ushort)((ushort)(SUB161(auVar6 >> 7,0) & 1) | (ushort)(SUB161(auVar6 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar6 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar6 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar6 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar6 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar6 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar6 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar6 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar6 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar6 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar6 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar6 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar6 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar6 >> 0x77,0) & 1) << 0xe | (ushort)(auVar6[0xf] >> 7) << 0xf) ==
      0xffff) {
    return 2;
  }
  local_68 = *param_2;
  uStack_60 = param_2[1];
  local_48 = uVar1;
  uStack_40 = uVar2;
  if ((getClassEntries()::classEntries == '\0') &&
     (iVar3 = __cxa_guard_acquire(&getClassEntries()::classEntries), iVar3 != 0)) {
    ClassEntry::ClassEntry
              ((ClassEntry *)getClassEntries()::classEntries,3,(PClassInfo2 *)"Audio Module Class",
               '\x01');
    ClassEntry::ClassEntry
              ((ClassEntry *)(getClassEntries()::classEntries + 0x470),1,
               (PClassInfo2 *)"Component Controller Class",'\x01');
    __cxa_guard_release(&getClassEntries()::classEntries);
  }
  auVar7[0] = -(*param_1 == getClassEntries()::classEntries[0x1b8]);
  auVar7[1] = -(param_1[1] == getClassEntries()::classEntries[0x1b9]);
  auVar7[2] = -(param_1[2] == getClassEntries()::classEntries[0x1ba]);
  auVar7[3] = -(param_1[3] == getClassEntries()::classEntries[0x1bb]);
  auVar7[4] = -(param_1[4] == getClassEntries()::classEntries[0x1bc]);
  auVar7[5] = -(param_1[5] == getClassEntries()::classEntries[0x1bd]);
  auVar7[6] = -(param_1[6] == getClassEntries()::classEntries[0x1be]);
  auVar7[7] = -(param_1[7] == getClassEntries()::classEntries[0x1bf]);
  auVar7[8] = -(param_1[8] == getClassEntries()::classEntries[0x1c0]);
  auVar7[9] = -(param_1[9] == getClassEntries()::classEntries[0x1c1]);
  auVar7[10] = -(param_1[10] == getClassEntries()::classEntries[0x1c2]);
  auVar7[0xb] = -(param_1[0xb] == getClassEntries()::classEntries[0x1c3]);
  auVar7[0xc] = -(param_1[0xc] == getClassEntries()::classEntries[0x1c4]);
  auVar7[0xd] = -(param_1[0xd] == getClassEntries()::classEntries[0x1c5]);
  auVar7[0xe] = -(param_1[0xe] == getClassEntries()::classEntries[0x1c6]);
  auVar7[0xf] = -(param_1[0xf] == getClassEntries()::classEntries[0x1c7]);
  if ((ushort)((ushort)(SUB161(auVar7 >> 7,0) & 1) | (ushort)(SUB161(auVar7 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar7 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar7 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar7 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar7 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar7 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar7 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar7 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar7 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar7 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar7 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar7 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar7 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar7 >> 0x77,0) & 1) << 0xe | (ushort)(auVar7[0xf] >> 7) << 0xf) ==
      0xffff) {
    puVar5 = getClassEntries()::classEntries;
  }
  else {
    auVar8[0] = -(*param_1 == getClassEntries()::classEntries[0x628]);
    auVar8[1] = -(param_1[1] == getClassEntries()::classEntries[0x629]);
    auVar8[2] = -(param_1[2] == getClassEntries()::classEntries[0x62a]);
    auVar8[3] = -(param_1[3] == getClassEntries()::classEntries[0x62b]);
    auVar8[4] = -(param_1[4] == getClassEntries()::classEntries[0x62c]);
    auVar8[5] = -(param_1[5] == getClassEntries()::classEntries[0x62d]);
    auVar8[6] = -(param_1[6] == getClassEntries()::classEntries[0x62e]);
    auVar8[7] = -(param_1[7] == getClassEntries()::classEntries[0x62f]);
    auVar8[8] = -(param_1[8] == getClassEntries()::classEntries[0x630]);
    auVar8[9] = -(param_1[9] == getClassEntries()::classEntries[0x631]);
    auVar8[10] = -(param_1[10] == getClassEntries()::classEntries[0x632]);
    auVar8[0xb] = -(param_1[0xb] == getClassEntries()::classEntries[0x633]);
    auVar8[0xc] = -(param_1[0xc] == getClassEntries()::classEntries[0x634]);
    auVar8[0xd] = -(param_1[0xd] == getClassEntries()::classEntries[0x635]);
    auVar8[0xe] = -(param_1[0xe] == getClassEntries()::classEntries[0x636]);
    auVar8[0xf] = -(param_1[0xf] == getClassEntries()::classEntries[0x637]);
    if ((ushort)((ushort)(SUB161(auVar8 >> 7,0) & 1) | (ushort)(SUB161(auVar8 >> 0xf,0) & 1) << 1 |
                 (ushort)(SUB161(auVar8 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar8 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar8 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar8 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar8 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar8 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar8 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar8 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar8 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar8 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar8 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar8 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar8 >> 0x77,0) & 1) << 0xe | (ushort)(auVar8[0xf] >> 7) << 0xf)
        != 0xffff) {
      return 0xffffffff;
    }
    puVar5 = getClassEntries()::classEntries + 0x470;
  }
  plVar4 = (long *)(**(code **)(*(long *)this + 0x60))(this,puVar5);
  if (plVar4 != (long *)0x0) {
                    /* try { // try from 001a4bc4 to 001a4bce has its CatchHandler @ 001a4c59 */
    iVar3 = (**(code **)*plVar4)(plVar4,&local_68,param_3);
                    /* try { // try from 001a4bd4 to 001a4bd9 has its CatchHandler @ 001a4c51 */
    (**(code **)(*plVar4 + 0x10))(plVar4);
    if (iVar3 == 0) {
      return 0;
    }
  }
  return 0xffffffff;
}



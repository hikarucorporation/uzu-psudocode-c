// Function : getSpecialLocation
// Namespace: juce:File
// Entry    : 0049c660
// Prototype: File * getSpecialLocation(File * this, undefined4 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5)
// Body     : 0049c660 - 0049c960


/* juce::File::getSpecialLocation(juce::File::SpecialLocationType) */

File * __thiscall
juce::File::getSpecialLocation
          (File *this,undefined4 param_1,undefined8 param_2,undefined8 param_3,uint *param_4,
          ulong param_5)

{
  File *pFVar1;
  int iVar2;
  bool bVar3;
  __uid_t __uid;
  byte *pbVar4;
  int *piVar5;
  File *pFVar6;
  passwd *ppVar7;
  uint *puVar8;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  char *pcVar9;
  undefined8 extraout_RDX_01;
  undefined8 extraout_RDX_02;
  undefined8 extraout_RDX_03;
  undefined8 extraout_RDX_04;
  undefined8 extraout_RDX_05;
  char *pcVar10;
  File *local_20;
  int *local_18;
  uint switchD_0049c683::switchdataD_005e2034;
  
  puVar8 = &switchD_0049c683::switchdataD_005e2034;
  switch(param_1) {
  case 0:
    pbVar4 = (byte *)getenv("HOME");
    if (pbVar4 == (byte *)0x0) {
      __uid = getuid();
      ppVar7 = getpwuid(__uid);
      if (ppVar7 == (passwd *)0x0) goto switchD_0049c683_default;
      pFVar6 = (File *)StringHolderUtils::createFromCharPointer<juce::CharPointer_UTF8>
                                 ((byte *)ppVar7->pw_dir);
                    /* try { // try from 0049c8dc to 0049c8e8 has its CatchHandler @ 0049c961 */
      local_20 = pFVar6;
      parseAbsolutePath(this,(uint *)&local_20,extraout_RDX_04,puVar8,param_4,param_5);
    }
    else {
      pFVar6 = (File *)StringHolderUtils::createFromCharPointer<juce::CharPointer_UTF8>(pbVar4);
                    /* try { // try from 0049c73b to 0049c747 has its CatchHandler @ 0049c96a */
      local_20 = pFVar6;
      parseAbsolutePath(this,(uint *)&local_20,extraout_RDX_00,puVar8,param_4,param_5);
    }
    goto LAB_0049c8e9;
  case 1:
    pcVar10 = "XDG_DOCUMENTS_DIR";
    pcVar9 = "~/Documents";
    break;
  case 2:
    pcVar10 = "XDG_DESKTOP_DIR";
    pcVar9 = "~/Desktop";
    break;
  case 3:
    pcVar10 = "XDG_MUSIC_DIR";
    pcVar9 = "~/Music";
    break;
  case 4:
    pcVar10 = "XDG_VIDEOS_DIR";
    pcVar9 = "~/Videos";
    break;
  case 5:
    pcVar10 = "XDG_PICTURES_DIR";
    pcVar9 = "~/Pictures";
    break;
  case 6:
    pcVar10 = "XDG_CONFIG_HOME";
    pcVar9 = "~/.config";
    break;
  case 7:
  case 8:
    pFVar6 = operator_new__(0x1f);
    LOCK();
    *(int *)pFVar6 = 0;
    UNLOCK();
    *(undefined8 *)(pFVar6 + 8) = 8;
    local_20 = pFVar6 + 0x10;
    *(int *)(pFVar6 + 0x10) = 0x74706f2f;
    pFVar6[0x14] = (File)0x0;
                    /* try { // try from 0049c6df to 0049c6eb has its CatchHandler @ 0049c978 */
    parseAbsolutePath(this,(uint *)&local_20,extraout_RDX,puVar8,param_4,param_5);
    goto LAB_0049c8f9;
  case 9:
    pbVar4 = (byte *)getenv("TMPDIR");
    if (pbVar4 == (byte *)0x0) {
      pFVar6 = operator_new__(0x1f);
      LOCK();
      *(int *)pFVar6 = 0;
      UNLOCK();
      *(undefined8 *)(pFVar6 + 8) = 8;
      local_20 = pFVar6 + 0x10;
      *(int *)(pFVar6 + 0x10) = 0x706d742f;
      pFVar6[0x14] = (File)0x0;
                    /* try { // try from 0049c952 to 0049c95e has its CatchHandler @ 0049c963 */
      parseAbsolutePath(this,(uint *)&local_20,extraout_RDX_05,puVar8,param_4,param_5);
      goto LAB_0049c8f9;
    }
    pFVar6 = (File *)StringHolderUtils::createFromCharPointer<juce::CharPointer_UTF8>(pbVar4);
                    /* try { // try from 0049c7dd to 0049c7e9 has its CatchHandler @ 0049c968 */
    local_20 = pFVar6;
    parseAbsolutePath(this,(uint *)&local_20,extraout_RDX_01,puVar8,param_4,param_5);
    goto LAB_0049c8e9;
  case 10:
  case 0xb:
  case 0xc:
    juce_getExecutableFile((juce *)&local_20);
    pFVar6 = local_20;
                    /* try { // try from 0049c694 to 0049c6ac has its CatchHandler @ 0049c97d */
    bVar3 = isSymbolicLink(local_20);
    if (bVar3) {
      getLinkedTarget(this,(long *)&local_20);
    }
    else {
      *(File **)this = pFVar6;
      pFVar1 = pFVar6 + -0x10;
      if (pFVar1 != (File *)&emptyString) {
        LOCK();
        *(int *)pFVar1 = *(int *)pFVar1 + 1;
        UNLOCK();
        pFVar6 = local_20;
      }
    }
    goto LAB_0049c8e9;
  case 0xd:
    piVar5 = operator_new__(0x27);
    LOCK();
    *piVar5 = 0;
    UNLOCK();
    piVar5[2] = 0x10;
    piVar5[3] = 0;
    local_18 = piVar5 + 4;
    piVar5[4] = 0x6f72702f;
    piVar5[5] = 0x65732f63;
    piVar5[6] = 0x652f666c;
    *(undefined2 *)(piVar5 + 7) = 0x6578;
    *(undefined1 *)((long)piVar5 + 0x1e) = 0;
                    /* try { // try from 0049c830 to 0049c83e has its CatchHandler @ 0049c971 */
    parseAbsolutePath((File *)&local_20,(uint *)&local_18,extraout_RDX_02,0x65732f636f72702f,param_4
                      ,param_5);
    LOCK();
    iVar2 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      operator_delete__(piVar5);
    }
    pFVar6 = local_20;
                    /* try { // try from 0049c859 to 0049c871 has its CatchHandler @ 0049c976 */
    bVar3 = isSymbolicLink(local_20);
    if (bVar3) {
      getLinkedTarget(this,(long *)&local_20);
    }
    else {
                    /* try { // try from 0049c8b0 to 0049c8b7 has its CatchHandler @ 0049c976 */
      juce_getExecutableFile((juce *)this);
    }
LAB_0049c8e9:
    pFVar6 = pFVar6 + -0x10;
    if (pFVar6 == (File *)&emptyString) {
      return this;
    }
LAB_0049c8f9:
    LOCK();
    iVar2 = *(int *)pFVar6;
    *(int *)pFVar6 = *(int *)pFVar6 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      operator_delete__(pFVar6);
      return this;
    }
    return this;
  case 0xe:
    pFVar6 = operator_new__(0x1f);
    LOCK();
    *(int *)pFVar6 = 0;
    UNLOCK();
    *(undefined8 *)(pFVar6 + 8) = 8;
    local_20 = pFVar6 + 0x10;
    *(int *)(pFVar6 + 0x10) = 0x7273752f;
    pFVar6[0x14] = (File)0x0;
                    /* try { // try from 0049c8a1 to 0049c8ad has its CatchHandler @ 0049c96c */
    parseAbsolutePath(this,(uint *)&local_20,extraout_RDX_03,puVar8,param_4,param_5);
    goto LAB_0049c8f9;
  default:
switchD_0049c683_default:
    *(undefined1 **)this = &DAT_0061ac58;
    return this;
  }
  resolveXDGFolder((juce *)this,(byte *)pcVar10,(byte *)pcVar9,
                   &switchD_0049c683::switchdataD_005e2034,param_4,param_5);
  return this;
}



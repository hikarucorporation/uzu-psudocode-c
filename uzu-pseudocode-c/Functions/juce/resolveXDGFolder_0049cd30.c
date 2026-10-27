// Function : resolveXDGFolder
// Namespace: juce
// Entry    : 0049cd30
// Prototype: undefined resolveXDGFolder(juce * this, byte * param_1, byte * param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5)
// Body     : 0049cd30 - 0049d3c3


/* juce::resolveXDGFolder(char const*, char const*) */

void __thiscall
juce::resolveXDGFolder
          (juce *this,byte *param_1,byte *param_2,undefined8 param_3,uint *param_4,ulong param_5)

{
  char cVar1;
  char *pcVar2;
  undefined8 uVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  ulong uVar7;
  byte *pbVar8;
  byte *pbVar9;
  byte bVar10;
  ulong extraout_RDX;
  ulong extraout_RDX_00;
  ulong extraout_RDX_01;
  ulong extraout_RDX_02;
  ulong extraout_RDX_03;
  undefined8 extraout_RDX_04;
  undefined8 extraout_RDX_05;
  ulong extraout_RDX_06;
  ulong extraout_RDX_07;
  ulong extraout_RDX_08;
  ulong extraout_RDX_09;
  ulong extraout_RDX_10;
  ulong extraout_RDX_11;
  ulong extraout_RDX_12;
  ulong extraout_RDX_13;
  ulong extraout_RDX_14;
  ulong extraout_RDX_15;
  ulong extraout_RDX_16;
  byte *pbVar11;
  byte *pbVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  undefined8 *puVar16;
  int *piVar17;
  ulong uVar18;
  byte *local_120;
  char *local_118;
  byte *local_110;
  void *local_108;
  undefined8 uStack_100;
  juce *local_f0;
  undefined4 *local_e8;
  byte *local_e0;
  byte *local_d8;
  long local_d0;
  byte *local_c8;
  undefined1 local_c0 [144];
  
  local_108 = (void *)0x0;
  uStack_100 = 0;
  local_f0 = this;
  local_d8 = param_1;
                    /* try { // try from 0049cd56 to 0049cd5f has its CatchHandler @ 0049d485 */
  puVar6 = operator_new__(0x33);
  LOCK();
  *puVar6 = 0;
  UNLOCK();
  *(undefined8 *)(puVar6 + 2) = 0x1c;
  uVar3 = s_malformed_headernot_enough_input_005de290._104_8_;
  pbVar8 = (byte *)(puVar6 + 4);
  *(undefined8 *)(puVar6 + 4) = s_malformed_headernot_enough_input_005de290._96_8_;
  *(undefined8 *)(puVar6 + 6) = uVar3;
  *(undefined8 *)(puVar6 + 8) = 0x737269642e737269;
  *(undefined1 *)(puVar6 + 10) = 0;
                    /* try { // try from 0049cd95 to 0049cda3 has its CatchHandler @ 0049d464 */
  local_110 = pbVar8;
  File::parseAbsolutePath
            ((File *)&local_118,(uint *)&local_110,0x737269642e737269,pbVar8,param_4,param_5);
  pcVar2 = local_118;
  if (((*local_118 == '\0') || (iVar4 = access(local_118,0), iVar4 != 0)) ||
     ((*pcVar2 != '\0' &&
      ((iVar4 = stat64(pcVar2,(stat64 *)local_c0), iVar4 == 0 && ((local_c0._24_4_ & 0x4000) != 0)))
      ))) {
    pbVar12 = &DAT_0061ac58;
    local_120 = &DAT_0061ac58;
  }
  else {
                    /* try { // try from 0049d1e6 to 0049d1f4 has its CatchHandler @ 0049d3d3 */
    FileInputStream::FileInputStream((FileInputStream *)local_c0,(long *)&local_118);
    if (*(char *)local_c0._32_8_ == '\0') {
                    /* try { // try from 0049d3a1 to 0049d3af has its CatchHandler @ 0049d3c4 */
      InputStream::readEntireStreamAsString((String *)&local_120,local_c0);
    }
    else {
      local_120 = &DAT_0061ac58;
    }
    pbVar12 = local_120;
    FileInputStream::~FileInputStream((FileInputStream *)local_c0);
  }
                    /* try { // try from 0049cdcd to 0049cdd9 has its CatchHandler @ 0049d40e */
  StringArray::addLines((StringArray *)&local_108,pbVar12);
  pbVar12 = pbVar12 + -0x10;
  uVar15 = extraout_RDX;
  if (pbVar12 != (byte *)&emptyString) {
    LOCK();
    iVar4 = *(int *)pbVar12;
    *(int *)pbVar12 = *(int *)pbVar12 + -1;
    UNLOCK();
    if (iVar4 == 0) {
      operator_delete__(pbVar12);
      uVar15 = extraout_RDX_00;
    }
  }
  piVar17 = (int *)(local_118 + -0x10);
  local_c8 = param_2;
  if (piVar17 != &emptyString) {
    LOCK();
    iVar4 = *piVar17;
    *piVar17 = *piVar17 + -1;
    UNLOCK();
    if (iVar4 == 0) {
      operator_delete__(piVar17);
      uVar15 = extraout_RDX_01;
    }
  }
  pbVar12 = local_110 + -0x10;
  if (pbVar12 != (byte *)&emptyString) {
    LOCK();
    iVar4 = *(int *)pbVar12;
    *(int *)pbVar12 = *(int *)pbVar12 + -1;
    UNLOCK();
    if (iVar4 == 0) {
      operator_delete__(pbVar12);
      uVar15 = extraout_RDX_15;
      goto joined_r0x0049d222;
    }
  }
joined_r0x0049d222:
  if ((int)uStack_100._4_4_ < 1) {
LAB_0049d228:
    pbVar11 = local_c8;
    pbVar12 = &DAT_0061ac58;
    if ((local_c8 != (byte *)0x0) && (bVar10 = *local_c8, bVar10 != 0)) {
      pbVar8 = local_c8 + 1;
      lVar14 = 0;
      do {
        lVar13 = lVar14 + (ulong)(bVar10 >> 7);
        lVar14 = lVar13 + 1;
        bVar10 = *pbVar8;
        pbVar8 = pbVar8 + 1;
      } while (bVar10 != 0);
      uVar15 = lVar13 + 5U & 0xfffffffffffffffc;
                    /* try { // try from 0049d274 to 0049d278 has its CatchHandler @ 0049d3d8 */
      puVar6 = operator_new__(uVar15 + 0x17);
      LOCK();
      *puVar6 = 0;
      UNLOCK();
      *(ulong *)(puVar6 + 2) = uVar15;
      pbVar12 = (byte *)(puVar6 + 4);
      pbVar8 = (byte *)CONCAT71((int7)((ulong)pbVar8 >> 8),*pbVar11);
      pbVar9 = pbVar12;
      uVar15 = extraout_RDX_16;
      if (*pbVar11 != 0) {
        do {
          pbVar11 = pbVar11 + 1;
          bVar10 = (byte)pbVar8;
          if ((char)bVar10 < '\0') {
            uVar15 = CONCAT71((int7)(((ulong)pbVar8 & 0xffffffff) >> 8),
                              (byte)((ulong)pbVar8 & 0xffffffff) >> 6) | 0xc0;
            *pbVar9 = (byte)uVar15;
            pbVar9[1] = bVar10 & 0x3f | 0x80;
            pbVar9 = pbVar9 + 1;
          }
          else {
            *pbVar9 = bVar10;
          }
          pbVar9 = pbVar9 + 1;
          pbVar8 = (byte *)(ulong)*pbVar11;
        } while (*pbVar11 != 0);
      }
      *pbVar9 = 0;
    }
                    /* try { // try from 0049d2d6 to 0049d2e4 has its CatchHandler @ 0049d3dd */
    local_c0._0_8_ = pbVar12;
    File::parseAbsolutePath((File *)local_f0,(uint *)local_c0,uVar15,pbVar8,param_4,param_5);
    pbVar12 = pbVar12 + -0x10;
    if (pbVar12 != (byte *)&emptyString) {
      LOCK();
      iVar4 = *(int *)pbVar12;
      *(int *)pbVar12 = *(int *)pbVar12 + -1;
      UNLOCK();
      if (iVar4 == 0) {
LAB_0049d306:
        operator_delete__(pbVar12);
      }
    }
LAB_0049d30b:
    if (0 < (int)uStack_100._4_4_) {
      lVar14 = 0;
      do {
        piVar17 = (int *)(*(long *)((long)local_108 + lVar14 * 8) + -0x10);
        if (piVar17 != &emptyString) {
          LOCK();
          iVar4 = *piVar17;
          *piVar17 = *piVar17 + -1;
          UNLOCK();
          if (iVar4 == 0) {
            operator_delete__(piVar17);
          }
        }
        lVar14 = lVar14 + 1;
      } while (lVar14 < (int)uStack_100._4_4_);
    }
    free(local_108);
    return;
  }
  uVar7 = (ulong)uStack_100._4_4_;
  uVar18 = 0;
LAB_0049ce82:
  if (uVar18 < (uVar7 & 0xffffffff)) {
    puVar16 = (undefined8 *)(uVar18 * 8 + (long)local_108);
  }
  else {
    puVar16 = &StringArray::operator[](int)::empty;
    if (StringArray::operator[](int)::empty == '\0') {
      iVar4 = __cxa_guard_acquire(&StringArray::operator[](int)::empty);
      puVar16 = &StringArray::operator[](int)::empty;
      if (iVar4 != 0) {
        StringArray::operator[](int)::empty = &DAT_0061ac58;
        __cxa_atexit(String::~String,&StringArray::operator[](int)::empty,&__dso_handle);
        __cxa_guard_release(&StringArray::operator[](int)::empty);
        puVar16 = &StringArray::operator[](int)::empty;
      }
    }
  }
                    /* try { // try from 0049ceb5 to 0049cebe has its CatchHandler @ 0049d5be */
  String::trimStart(&local_120,puVar16);
  iVar4 = 0;
  pbVar8 = local_d8;
  do {
    if ((char)*pbVar8 < '\0') {
      do {
        pbVar11 = pbVar8 + 1;
        pbVar8 = pbVar8 + 1;
        pbVar12 = pbVar8;
      } while ((*pbVar11 & 0xc0) == 0x80);
    }
    else {
      pbVar12 = pbVar8 + 1;
      if (*pbVar8 == 0) break;
    }
    iVar4 = iVar4 + 1;
    pbVar8 = pbVar12;
  } while( true );
  uVar5 = CharacterFunctions::compareUpTo<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
                    (local_120,local_d8,iVar4,pbVar8,param_4,(uint)param_5);
  uVar15 = extraout_RDX_02;
  if (uVar5 != 0) goto LAB_0049cf23;
                    /* try { // try from 0049cf60 to 0049cf69 has its CatchHandler @ 0049d592 */
  puVar6 = operator_new__(0x1b);
  LOCK();
  *puVar6 = 0;
  UNLOCK();
  *(undefined8 *)(puVar6 + 2) = 4;
  local_e8 = puVar6 + 4;
  *(undefined2 *)(puVar6 + 4) = 0x7e;
                    /* try { // try from 0049cf88 to 0049cf96 has its CatchHandler @ 0049d566 */
  File::parseAbsolutePath
            ((File *)&local_e0,(uint *)&local_e8,extraout_RDX_04,local_e8,param_4,param_5);
                    /* try { // try from 0049cf9f to 0049cfb5 has its CatchHandler @ 0049d53a */
  param_4 = (uint *)0x0;
  pbVar8 = local_e0;
  String::replace((String *)&local_d0,(long *)&local_120,&DAT_005e63f5,local_e0,(byte *)0x0,param_5)
  ;
                    /* try { // try from 0049cfb6 to 0049cfca has its CatchHandler @ 0049d50e */
  String::fromFirstOccurrenceOf((long *)&local_110,&local_d0,&DAT_0065b9fe,pbVar8,param_4,param_5);
                    /* try { // try from 0049cfcb to 0049cfda has its CatchHandler @ 0049d4e2 */
  String::trim((long *)&local_118,(long *)&local_110);
                    /* try { // try from 0049cfdb to 0049cfea has its CatchHandler @ 0049d4b6 */
  String::unquoted((undefined8 *)local_c0,&local_118);
                    /* try { // try from 0049cfeb to 0049cff7 has its CatchHandler @ 0049d48a */
  File::parseAbsolutePath((File *)local_f0,(uint *)local_c0,extraout_RDX_05,pbVar8,param_4,param_5);
  pbVar12 = (byte *)(local_c0._0_8_ + -0x10);
  uVar15 = extraout_RDX_06;
  if (pbVar12 != (byte *)&emptyString) {
    LOCK();
    iVar4 = *(int *)pbVar12;
    *(int *)pbVar12 = *(int *)pbVar12 + -1;
    UNLOCK();
    if (iVar4 == 0) {
      operator_delete__(pbVar12);
      uVar15 = extraout_RDX_07;
    }
  }
  piVar17 = (int *)(local_118 + -0x10);
  if (piVar17 != &emptyString) {
    LOCK();
    iVar4 = *piVar17;
    *piVar17 = *piVar17 + -1;
    UNLOCK();
    if (iVar4 == 0) {
      operator_delete__(piVar17);
      uVar15 = extraout_RDX_08;
    }
  }
  pbVar12 = local_110 + -0x10;
  if (pbVar12 != (byte *)&emptyString) {
    LOCK();
    iVar4 = *(int *)pbVar12;
    *(int *)pbVar12 = *(int *)pbVar12 + -1;
    UNLOCK();
    if (iVar4 == 0) {
      operator_delete__(pbVar12);
      uVar15 = extraout_RDX_09;
    }
  }
  piVar17 = (int *)(local_d0 + -0x10);
  if (piVar17 != &emptyString) {
    LOCK();
    iVar4 = *piVar17;
    *piVar17 = *piVar17 + -1;
    UNLOCK();
    if (iVar4 == 0) {
      operator_delete__(piVar17);
      uVar15 = extraout_RDX_10;
    }
  }
  pbVar12 = local_e0 + -0x10;
  if (pbVar12 != (byte *)&emptyString) {
    LOCK();
    iVar4 = *(int *)pbVar12;
    *(int *)pbVar12 = *(int *)pbVar12 + -1;
    UNLOCK();
    if (iVar4 == 0) {
      operator_delete__(pbVar12);
      uVar15 = extraout_RDX_11;
    }
  }
  piVar17 = local_e8 + -4;
  if (piVar17 == &emptyString) {
LAB_0049d0dd:
    pcVar2 = *(char **)local_f0;
    cVar1 = *pcVar2;
  }
  else {
    LOCK();
    iVar4 = *piVar17;
    *piVar17 = *piVar17 + -1;
    UNLOCK();
    if (iVar4 != 0) goto LAB_0049d0dd;
    operator_delete__(piVar17);
    pcVar2 = *(char **)local_f0;
    cVar1 = *pcVar2;
    uVar15 = extraout_RDX_13;
  }
  if (cVar1 != '\0') {
    iVar4 = stat64(pcVar2,(stat64 *)local_c0);
    uVar15 = extraout_RDX_12;
    if ((iVar4 == 0) && (pbVar8 = (byte *)0x4000, (local_c0._24_4_ & 0x4000) != 0)) {
      pbVar12 = local_120 + -0x10;
      if (pbVar12 == (byte *)&emptyString) goto LAB_0049d30b;
      LOCK();
      iVar4 = *(int *)pbVar12;
      *(int *)pbVar12 = *(int *)pbVar12 + -1;
      UNLOCK();
      if (iVar4 == 0) goto LAB_0049d306;
      goto LAB_0049d30b;
    }
  }
  piVar17 = (int *)(pcVar2 + -0x10);
  if (piVar17 != &emptyString) {
    LOCK();
    iVar4 = *piVar17;
    *piVar17 = *piVar17 + -1;
    UNLOCK();
    if (iVar4 == 0) {
      operator_delete__(piVar17);
      uVar15 = extraout_RDX_14;
    }
  }
LAB_0049cf23:
  pbVar12 = local_120 + -0x10;
  if (pbVar12 != (byte *)&emptyString) {
    LOCK();
    iVar4 = *(int *)pbVar12;
    *(int *)pbVar12 = *(int *)pbVar12 + -1;
    UNLOCK();
    if (iVar4 == 0) {
      operator_delete__(pbVar12);
      uVar15 = extraout_RDX_03;
    }
  }
  uVar18 = uVar18 + 1;
  uVar7 = (ulong)(int)uStack_100._4_4_;
  if ((long)uVar7 <= (long)uVar18) goto LAB_0049d228;
  goto LAB_0049ce82;
}



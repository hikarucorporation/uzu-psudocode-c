// Function : settingChanged
// Namespace: juce:LinuxComponentPeer
// Entry    : 002d50c0
// Prototype: undefined settingChanged(undefined8 param_1_00, undefined8 * param_2)
// Body     : 002d50c0 - 002d543b


/* juce::LinuxComponentPeer::settingChanged(juce::XWindowSystemUtilities::XSetting const&) */

void __thiscall juce::LinuxComponentPeer::settingChanged(undefined8 param_1_00,undefined8 *param_2)

{
  double *pdVar1;
  int *piVar2;
  double dVar3;
  undefined1 auVar4 [16];
  uint uVar5;
  byte *pbVar6;
  Displays *this;
  void *__ptr;
  long lVar7;
  undefined8 uVar8;
  long *plVar9;
  uint uVar10;
  int iVar11;
  StringArray *in_RAX;
  Desktop *pDVar12;
  long lVar13;
  ulong uVar14;
  byte bVar15;
  undefined4 uVar16;
  ulong uVar17;
  bool bVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  StringArray *local_28;
  
  if (settingChanged(juce::XWindowSystemUtilities::XSetting_const&)::possibleSettings == '\0') {
    local_28 = in_RAX;
    iVar11 = __cxa_guard_acquire(&settingChanged(juce::XWindowSystemUtilities::XSetting_const&)::
                                  possibleSettings);
    if (iVar11 != 0) {
                    /* try { // try from 002d53d0 to 002d53de has its CatchHandler @ 002d5467 */
      juce::String::String((String *)&local_28,(byte *)"Gdk/WindowScalingFactor");
                    /* try { // try from 002d53e3 to 002d53ea has its CatchHandler @ 002d543c */
      StringArray::StringArray<char_const(&)[16],char_const(&)[8]>(local_28);
      local_28 = local_28 + -0x10;
      if (local_28 != (StringArray *)&emptyString) {
        LOCK();
        iVar11 = *(int *)local_28;
        *(int *)local_28 = *(int *)local_28 + -1;
        UNLOCK();
        if (iVar11 == 0) {
          operator_delete__(local_28);
        }
      }
      __cxa_atexit(StringArray::~StringArray,
                   &settingChanged(juce::XWindowSystemUtilities::XSetting_const&)::possibleSettings,
                   &__dso_handle);
      __cxa_guard_release(&settingChanged(juce::XWindowSystemUtilities::XSetting_const&)::
                           possibleSettings);
    }
  }
  lVar7 = settingChanged(juce::XWindowSystemUtilities::XSetting_const&)::possibleSettings;
  uVar17 = (ulong)DAT_0071c734;
  if (0 < (int)DAT_0071c734) {
    pbVar6 = (byte *)*param_2;
    uVar14 = 0;
    do {
      uVar10 = CharacterFunctions::compare<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
                         (pbVar6,*(byte **)(lVar7 + uVar14 * 8));
      if (uVar10 == 0) {
        if ((uVar14 & 0x80000000) != 0) {
          return;
        }
        if (Desktop::instance == (Desktop *)0x0) {
          pDVar12 = operator_new(0x1d0);
                    /* try { // try from 002d5143 to 002d514a has its CatchHandler @ 002d5482 */
          Desktop::Desktop(pDVar12);
          Desktop::instance = pDVar12;
        }
        pDVar12 = Desktop::instance;
        this = *(Displays **)(Desktop::instance + 0xe0);
        __ptr = *(void **)this;
        *(undefined8 *)this = 0;
        *(undefined4 *)(this + 8) = 0;
        iVar11 = *(int *)(this + 0xc);
        *(undefined4 *)(this + 0xc) = 0;
                    /* try { // try from 002d5176 to 002d5180 has its CatchHandler @ 002d5495 */
        Displays::findDisplays(this,(long)pDVar12);
        if (iVar11 != *(int *)(this + 0xc)) goto LAB_002d52e1;
        if (iVar11 == 0) goto LAB_002d53a9;
        lVar7 = *(long *)this;
        lVar13 = 0;
        goto LAB_002d51b0;
      }
      uVar14 = uVar14 + 1;
    } while (uVar17 != uVar14);
  }
  return;
  while( true ) {
    auVar4 = *(undefined1 (*) [16])(lVar7 + 0x34 + lVar13);
    piVar2 = (int *)((long)__ptr + lVar13 + 0x34);
    auVar19._0_4_ = -(uint)(*piVar2 == auVar4._0_4_);
    auVar19._4_4_ = -(uint)(piVar2[1] == auVar4._4_4_);
    auVar19._8_4_ = -(uint)(piVar2[2] == auVar4._8_4_);
    auVar19._12_4_ = -(uint)(piVar2[3] == auVar4._12_4_);
    uVar10 = movmskps((int)pDVar12,auVar19);
    if ((((uVar10 & 1) == 0) || ((uVar10 & 2) == 0)) ||
       (((uVar10 & 4) == 0 || (bVar15 = (byte)uVar10 >> 3, bVar15 == 0)))) goto LAB_002d52e1;
    auVar4 = *(undefined1 (*) [16])((long)__ptr + lVar13 + 0x24);
    piVar2 = (int *)(lVar7 + 0x24 + lVar13);
    auVar20._0_4_ = (uint)(*piVar2 == auVar4._0_4_) * -0x80000000;
    auVar20._4_4_ = (uint)(piVar2[1] == auVar4._4_4_) * -0x80000000;
    auVar20._8_4_ = (uint)(piVar2[2] == auVar4._8_4_) * -0x80000000;
    auVar20._12_4_ = (uint)(piVar2[3] == auVar4._12_4_) * -0x80000000;
    uVar16 = movmskps(CONCAT31((int3)(uVar10 >> 8),bVar15),auVar20);
    if ((((char)uVar16 != '\x0f') ||
        (dVar3 = *(double *)((long)__ptr + lVar13 + 0x50),
        pdVar1 = (double *)(lVar7 + 0x50 + lVar13), dVar3 != *pdVar1)) ||
       ((NAN(dVar3) || NAN(*pdVar1) ||
        ((((((uVar8 = *(undefined8 *)(lVar7 + 0x44 + lVar13),
             *(int *)((long)__ptr + lVar13 + 0x44) != (int)uVar8 ||
             (*(int *)((long)__ptr + lVar13 + 0x48) != (int)((ulong)uVar8 >> 0x20))) ||
            (uVar8 = *(undefined8 *)(lVar7 + 4 + lVar13),
            *(int *)((long)__ptr + lVar13 + 4) != (int)uVar8)) ||
           ((*(int *)((long)__ptr + lVar13 + 8) != (int)((ulong)uVar8 >> 0x20) ||
            (*(int *)((long)__ptr + lVar13 + 0xc) != *(int *)(lVar7 + 0xc + lVar13))))) ||
          ((*(int *)((long)__ptr + lVar13 + 0x10) != *(int *)(lVar7 + 0x10 + lVar13) ||
           ((uVar8 = *(undefined8 *)(lVar7 + 0x14 + lVar13),
            *(int *)((long)__ptr + lVar13 + 0x14) != (int)uVar8 ||
            (*(int *)((long)__ptr + lVar13 + 0x18) != (int)((ulong)uVar8 >> 0x20))))))) ||
         (*(int *)((long)__ptr + lVar13 + 0x1c) != *(int *)(lVar7 + 0x1c + lVar13)))))))
    goto LAB_002d52e1;
    uVar10 = *(uint *)((long)__ptr + lVar13 + 0x20);
    pDVar12 = (Desktop *)(ulong)uVar10;
    uVar5 = *(uint *)(lVar7 + 0x20 + lVar13);
    if ((uVar10 != uVar5) ||
       (bVar18 = (long)iVar11 * 0x70 + -0x70 == lVar13, lVar13 = lVar13 + 0x70, bVar18)) break;
LAB_002d51b0:
    dVar3 = *(double *)((long)__ptr + lVar13 + 0x58);
    pdVar1 = (double *)(lVar7 + 0x58 + lVar13);
    if (((dVar3 != *pdVar1) || (NAN(dVar3) || NAN(*pdVar1))) ||
       (*(char *)((long)__ptr + lVar13) != *(char *)(lVar7 + lVar13))) goto LAB_002d52e1;
  }
  if (uVar10 != uVar5) {
LAB_002d52e1:
    if (Desktop::instance == (Desktop *)0x0) {
                    /* try { // try from 002d52ed to 002d52f6 has its CatchHandler @ 002d5480 */
      pDVar12 = operator_new(0x1d0);
                    /* try { // try from 002d52fa to 002d5301 has its CatchHandler @ 002d547e */
      Desktop::Desktop(pDVar12);
      Desktop::instance = pDVar12;
    }
    uVar10 = *(uint *)(Desktop::instance + 0xdc);
    if (0 < (int)uVar10) {
      uVar17 = (ulong)uVar10;
      if (Desktop::instance == (Desktop *)0x0) goto LAB_002d5340;
      do {
        uVar14 = uVar17 - 1;
        if ((uint)uVar14 < *(uint *)(Desktop::instance + 0xdc)) goto LAB_002d536a;
        while( true ) {
          if (uVar17 < 2) goto LAB_002d53a9;
          uVar17 = uVar14;
          if (Desktop::instance != (Desktop *)0x0) break;
LAB_002d5340:
                    /* try { // try from 002d5340 to 002d5349 has its CatchHandler @ 002d54aa */
          pDVar12 = operator_new(0x1d0);
                    /* try { // try from 002d534d to 002d5354 has its CatchHandler @ 002d54b2 */
          Desktop::Desktop(pDVar12);
          uVar14 = uVar17 - 1;
          Desktop::instance = pDVar12;
          if ((uint)uVar14 < *(uint *)(pDVar12 + 0xdc)) {
LAB_002d536a:
            plVar9 = *(long **)(*(long *)(Desktop::instance + 0xd0) + (uVar14 & 0xffffffff) * 8);
            if (plVar9 != (long *)0x0) {
                    /* try { // try from 002d5380 to 002d5385 has its CatchHandler @ 002d5497 */
              (**(code **)(*plVar9 + 200))();
            }
          }
        }
      } while( true );
    }
  }
LAB_002d53a9:
  free(__ptr);
  return;
}



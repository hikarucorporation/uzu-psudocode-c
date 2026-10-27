// Function : applicationCommandListChangeCallback
// Namespace: juce:Button
// Entry    : 00233250
// Prototype: undefined applicationCommandListChangeCallback(Button * this)
// Body     : 00233250 - 0023369d


/* juce::Button::applicationCommandListChangeCallback() */

void __thiscall juce::Button::applicationCommandListChangeCallback(Button *this)

{
  byte *pbVar1;
  char cVar2;
  void *__src;
  uint uVar3;
  int iVar4;
  ApplicationCommandTarget *pAVar5;
  long lVar6;
  wint_t *pwVar7;
  String *pSVar8;
  size_t sVar9;
  int *piVar10;
  char *pcVar11;
  char **ppcVar12;
  ulong uVar13;
  char *local_90;
  char *local_88;
  undefined2 local_80;
  undefined6 uStack_7e;
  wint_t *local_78;
  wint_t *local_70;
  int local_68 [2];
  char *local_60;
  char *local_58;
  undefined1 *local_50;
  void *local_48;
  ulong uStack_40;
  uint local_38;
  
  if (*(long **)(this + 0x198) == (long *)0x0) {
    return;
  }
  local_68[0] = 0;
  local_60 = "";
  local_58 = "";
  local_50 = &DAT_0061ac58;
  local_48 = (void *)0x0;
  uStack_40 = 0;
  local_38 = 0;
  iVar4 = *(int *)(this + 0x1b4);
                    /* try { // try from 002332a9 to 00233370 has its CatchHandler @ 0023372e */
  pAVar5 = (ApplicationCommandTarget *)(**(code **)(**(long **)(this + 0x198) + 0x18))();
  if ((pAVar5 == (ApplicationCommandTarget *)0x0) ||
     (pAVar5 = ApplicationCommandTarget::getTargetForCommand(pAVar5,iVar4),
     pAVar5 == (ApplicationCommandTarget *)0x0)) {
    Component::setEnabled((Component *)this,'\0');
    goto LAB_00233616;
  }
  local_68[0] = iVar4;
  (**(code **)(*(long *)pAVar5 + 0x20))(pAVar5,iVar4,local_68);
  if ((this[0x1f7] != (Button)0x0) && (lVar6 = *(long *)(this + 0x198), lVar6 != 0)) {
    ppcVar12 = &local_58;
    if (*local_58 == '\0') {
      ppcVar12 = &local_60;
    }
    local_88 = *ppcVar12;
    piVar10 = (int *)(local_88 + -0x10);
    if (piVar10 != &emptyString) {
      LOCK();
      *piVar10 = *piVar10 + 1;
      UNLOCK();
      lVar6 = *(long *)(this + 0x198);
    }
    uVar3 = *(uint *)(*(long *)(lVar6 + 0x50) + 0x74);
    if ((int)uVar3 < 1) {
      pwVar7 = (wint_t *)0x0;
    }
    else {
      pwVar7 = (wint_t *)0x0;
      uVar13 = 0;
      do {
        piVar10 = *(int **)(*(long *)(*(long *)(lVar6 + 0x50) + 0x68) + uVar13 * 8);
        if (*piVar10 == *(int *)(this + 0x1b4)) {
          uVar3 = piVar10[5];
          uVar13 = (ulong)uVar3;
          if ((long)(int)uVar3 < 1) {
            pwVar7 = (wint_t *)0x0;
            if (uVar13 == 0) break;
            local_70 = (wint_t *)((long)(int)uVar3 * 0xc);
            pwVar7 = (wint_t *)0x0;
          }
          else {
            __src = *(void **)(piVar10 + 2);
            uVar3 = (uVar3 >> 1) + uVar3 + 8 & 0xfffffff8;
            if ((int)uVar3 < 1) {
              pwVar7 = (wint_t *)0x0;
            }
            else {
              pwVar7 = malloc((ulong)uVar3 * 0xc);
            }
            memcpy(pwVar7,__src,uVar13 * 0xc);
            local_70 = pwVar7 + uVar13 * 3;
          }
          local_78 = pwVar7;
          goto LAB_0023340f;
        }
        uVar13 = uVar13 + 1;
      } while (uVar3 != uVar13);
    }
    goto LAB_0023357b;
  }
LAB_002335ee:
                    /* try { // try from 002335f9 to 00233615 has its CatchHandler @ 0023372e */
  Component::setEnabled((Component *)this,(local_38 & 1) == 0);
  setToggleState(this,SUB41((local_38 & 2) >> 1,0),0,0);
LAB_00233616:
  uStack_40 = uStack_40 & 0xffffffff;
  free(local_48);
  piVar10 = (int *)(local_50 + -0x10);
  if (piVar10 != &emptyString) {
    LOCK();
    iVar4 = *piVar10;
    *piVar10 = *piVar10 + -1;
    UNLOCK();
    if (iVar4 == 0) {
      operator_delete__(piVar10);
    }
  }
  piVar10 = (int *)(local_58 + -0x10);
  if (piVar10 != &emptyString) {
    LOCK();
    iVar4 = *piVar10;
    *piVar10 = *piVar10 + -1;
    UNLOCK();
    if (iVar4 == 0) {
      operator_delete__(piVar10);
    }
  }
  piVar10 = (int *)(local_60 + -0x10);
  if (piVar10 != &emptyString) {
    LOCK();
    iVar4 = *piVar10;
    *piVar10 = *piVar10 + -1;
    UNLOCK();
    if (iVar4 == 0) {
      operator_delete__(piVar10);
    }
  }
  return;
LAB_0023340f:
                    /* try { // try from 0023340f to 0023341b has its CatchHandler @ 002336a0 */
  KeyPress::getTextDescription(&local_90,pwVar7);
                    /* try { // try from 0023341c to 00233431 has its CatchHandler @ 002336a5 */
  juce::String::appendCharPointer((String *)&local_88,&DAT_005e333f,0x5e3341);
  iVar4 = 0;
  pcVar11 = local_90;
  do {
    cVar2 = *pcVar11;
    if (cVar2 < '\0') {
      do {
        pbVar1 = (byte *)(pcVar11 + 1);
        pcVar11 = pcVar11 + 1;
      } while ((*pbVar1 & 0xc0) == 0x80);
    }
    else {
      pcVar11 = pcVar11 + 1;
      if (cVar2 == '\0') break;
    }
    iVar4 = iVar4 + 1;
  } while( true );
  if (iVar4 == 1) {
                    /* try { // try from 00233489 to 00233497 has its CatchHandler @ 0023369e */
    translate((juce *)&local_80,(byte *)"shortcut");
                    /* try { // try from 00233498 to 002334de has its CatchHandler @ 002336aa */
    pSVar8 = juce::String::operator+=((String *)&local_88,(String *)&local_80);
    juce::String::appendCharPointer(pSVar8,": \'",0x5e3cd5);
    pSVar8 = juce::String::operator+=(pSVar8,(String *)&local_90);
    juce::String::appendCharPointer(pSVar8,&DAT_005e334b,0x5e334d);
    piVar10 = (int *)(CONCAT62(uStack_7e,local_80) + -0x10);
    if (piVar10 != &emptyString) {
      LOCK();
      iVar4 = *piVar10;
      *piVar10 = *piVar10 + -1;
      UNLOCK();
      if (iVar4 == 0) {
        operator_delete__(piVar10);
      }
    }
  }
  else {
                    /* try { // try from 00233510 to 00233541 has its CatchHandler @ 002336a5 */
    pSVar8 = juce::String::operator+=((String *)&local_88,(String *)&local_90);
    local_80 = 0x5d;
    sVar9 = strlen((char *)&local_80);
    juce::String::appendCharPointer(pSVar8,(juce *)&local_80,(long)local_68 + (sVar9 - 0x18));
  }
  piVar10 = (int *)(local_90 + -0x10);
  if (piVar10 != &emptyString) {
    LOCK();
    iVar4 = *piVar10;
    *piVar10 = *piVar10 + -1;
    UNLOCK();
    if (iVar4 == 0) {
      operator_delete__(piVar10);
    }
  }
  pwVar7 = pwVar7 + 3;
  if (pwVar7 == local_70) goto LAB_00233576;
  goto LAB_0023340f;
LAB_00233576:
  pwVar7 = local_78;
LAB_0023357b:
  free(pwVar7);
  piVar10 = (int *)(local_88 + -0x10);
  if (piVar10 != &emptyString) {
    LOCK();
    *piVar10 = *piVar10 + 1;
    UNLOCK();
  }
  LOCK();
  lVar6 = *(long *)(this + 0xf8);
  *(char **)(this + 0xf8) = local_88;
  UNLOCK();
  piVar10 = (int *)(lVar6 + -0x10);
  if (piVar10 != &emptyString) {
    LOCK();
    iVar4 = *piVar10;
    *piVar10 = *piVar10 + -1;
    UNLOCK();
    if (iVar4 == 0) {
      operator_delete__(piVar10);
    }
  }
  piVar10 = (int *)(local_88 + -0x10);
  if (piVar10 != &emptyString) {
    LOCK();
    iVar4 = *piVar10;
    *piVar10 = *piVar10 + -1;
    UNLOCK();
    if (iVar4 == 0) {
      operator_delete__(piVar10);
    }
  }
  goto LAB_002335ee;
}



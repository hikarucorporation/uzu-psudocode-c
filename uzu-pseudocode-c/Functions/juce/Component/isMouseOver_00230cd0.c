// Function : isMouseOver
// Namespace: juce:Component
// Entry    : 00230cd0
// Prototype: byte isMouseOver(Component * this, char param_1)
// Body     : 00230cd0 - 00230f4d


/* juce::Component::isMouseOver(bool) const */

byte __thiscall juce::Component::isMouseOver(Component *this,char param_1)

{
  pthread_t pVar1;
  long lVar2;
  MouseInputSourceImpl *this_00;
  Component *this_01;
  float *pfVar3;
  byte bVar4;
  int iVar5;
  undefined8 *puVar6;
  pthread_t pVar7;
  Desktop *this_02;
  Component *pCVar8;
  ulong uVar9;
  Component *pCVar10;
  Component *pCVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  float fVar14;
  undefined8 local_60;
  Component *local_58;
  undefined8 *local_50;
  undefined8 local_48;
  
  puVar6 = MessageManager::getInstance();
  iVar5 = pthread_mutex_lock((pthread_mutex_t *)(puVar6 + 4));
  if (iVar5 != 0) {
                    /* try { // try from 00230f47 to 00230f4d has its CatchHandler @ 00230f61 */
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(iVar5);
  }
  pVar7 = pthread_self();
  pVar1 = puVar6[2];
  pthread_mutex_unlock((pthread_mutex_t *)(puVar6 + 4));
  if (pVar1 == pVar7) {
    if (Desktop::instance == (Desktop *)0x0) {
      this_02 = operator_new(0x1d0);
                    /* try { // try from 00230d5d to 00230d64 has its CatchHandler @ 00230f4e */
      Desktop::Desktop(this_02);
      lVar2 = *(long *)(this_02 + 0x40);
      iVar5 = *(int *)(lVar2 + 0x44);
      Desktop::instance = this_02;
    }
    else {
      lVar2 = *(long *)(Desktop::instance + 0x40);
      iVar5 = *(int *)(lVar2 + 0x44);
    }
    if ((long)iVar5 != 0) {
      puVar12 = *(undefined8 **)(lVar2 + 0x38);
      puVar6 = puVar12 + iVar5;
LAB_00230dbd:
      this_00 = (MouseInputSourceImpl *)*puVar12;
      if ((*(long *)(this_00 + 0x48) != 0) &&
         (this_01 = *(Component **)(*(long *)(this_00 + 0x48) + 0x10), this_01 != (Component *)0x0))
      {
        if (this_01 != this) {
          if (param_1 == '\0') goto LAB_00230db0;
          pCVar8 = this_01;
          do {
            if (pCVar8 == (Component *)0x0) goto LAB_00230db0;
            pCVar8 = *(Component **)(pCVar8 + 0x30);
          } while (pCVar8 != this);
        }
        if (((*(ushort *)(this_00 + 0x3c) & 0x1f0) == 0) && (*(int *)(this_00 + 0x14) - 1U < 2))
        goto LAB_00230db0;
        uVar13 = detail::MouseInputSourceImpl::getScreenPosition(this_00);
        pCVar8 = this_01;
        do {
          pCVar10 = pCVar8;
          pCVar8 = *(Component **)(pCVar10 + 0x30);
        } while (*(Component **)(pCVar10 + 0x30) != (Component *)0x0);
        uVar13 = detail::ComponentHelpers::convertFromParentSpace<juce::Point<float>>
                           (uVar13,(long *)pCVar10);
        if (pCVar10 != this_01) {
          uVar13 = detail::ComponentHelpers::convertFromDistantParentSpace<juce::Point<float>>
                             (uVar13,(long)pCVar10,(long *)this_01);
        }
        local_48 = uVar13;
        uVar9 = contains(uVar13,this_01);
        if ((char)uVar9 == '\0') goto LAB_00230db0;
        pCVar8 = this_01;
        do {
          pCVar10 = pCVar8;
          pCVar8 = *(Component **)(pCVar10 + 0x30);
        } while (*(Component **)(pCVar10 + 0x30) != (Component *)0x0);
        pCVar8 = this_01;
        uVar13 = local_48;
        while (pCVar8 != pCVar10) {
          pCVar11 = pCVar10;
          while (pCVar11 != (Component *)0x0) {
            pCVar11 = *(Component **)(pCVar11 + 0x30);
            if (pCVar11 == pCVar8) goto LAB_00230d87;
          }
          local_50 = &local_60;
          local_60 = uVar13;
          local_58 = pCVar8;
          uVar13 = detail::ComponentHelpers::
                   convertToParentSpace<juce::Point<float>>(juce::Component_const&,juce::Point<float>)
                   ::{lambda()#1}::operator()((_lambda___1_ *)&local_58);
          fVar14 = (float)((ulong)uVar13 >> 0x20);
          pfVar3 = *(float **)(pCVar8 + 0x50);
          if (pfVar3 != (float *)0x0) {
            uVar13 = CONCAT44((float)uVar13 * pfVar3[3] + pfVar3[4] * fVar14 + pfVar3[5],
                              (float)uVar13 * *pfVar3 + pfVar3[1] * fVar14 + pfVar3[2]);
          }
          pCVar8 = *(Component **)(pCVar8 + 0x30);
          if (pCVar8 == (Component *)0x0) goto code_r0x00230f01;
        }
        goto LAB_00230d92;
      }
      goto LAB_00230db0;
    }
LAB_00230f32:
    bVar4 = 0;
  }
  else {
    bVar4 = (byte)this[0xea] >> 6 & 1;
  }
  return bVar4;
code_r0x00230f01:
  pCVar11 = pCVar10;
  do {
    pCVar8 = pCVar11;
    pCVar11 = *(Component **)(pCVar8 + 0x30);
  } while (*(Component **)(pCVar8 + 0x30) != (Component *)0x0);
  uVar13 = detail::ComponentHelpers::convertFromParentSpace<juce::Point<float>>
                     (uVar13,(long *)pCVar8);
  if (pCVar8 != pCVar10) {
LAB_00230d87:
    uVar13 = detail::ComponentHelpers::convertFromDistantParentSpace<juce::Point<float>>
                       (uVar13,(long)pCVar8,(long *)pCVar10);
  }
LAB_00230d92:
  pCVar8 = getComponentAt(uVar13,pCVar10);
  if (pCVar8 == this_01) {
    return 1;
  }
LAB_00230db0:
  puVar12 = puVar12 + 1;
  if (puVar12 == puVar6) goto LAB_00230f32;
  goto LAB_00230dbd;
}



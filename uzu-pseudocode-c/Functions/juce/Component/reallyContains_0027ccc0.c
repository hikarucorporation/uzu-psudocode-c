// Function : reallyContains
// Namespace: juce:Component
// Entry    : 0027ccc0
// Prototype: bool reallyContains(undefined8 param_1, Component * param_2)
// Body     : 0027ccc0 - 0027ce1c


/* WARNING: Unknown calling convention: __cdecl */
/* juce::Component::reallyContains(juce::Point<float>, bool) */

bool __cdecl juce::Component::reallyContains(undefined8 param_1,Component *param_2)

{
  float *pfVar1;
  ulong uVar2;
  Component *pCVar3;
  Component *pCVar4;
  Component *pCVar5;
  bool bVar6;
  float fVar8;
  undefined8 uVar7;
  undefined4 in_XMM0_Dc;
  undefined4 in_XMM0_Dd;
  undefined8 local_50;
  Component *local_48;
  undefined8 *local_40;
  undefined1 local_38 [16];
  
  local_38._8_4_ = in_XMM0_Dc;
  local_38._0_8_ = param_1;
  local_38._12_4_ = in_XMM0_Dd;
  uVar2 = contains(param_1,param_2);
  if ((char)uVar2 == '\0') {
    return false;
  }
  pCVar4 = param_2;
  do {
    pCVar5 = pCVar4;
    pCVar4 = *(Component **)(pCVar5 + 0x30);
  } while (*(Component **)(pCVar5 + 0x30) != (Component *)0x0);
  uVar7 = local_38._0_8_;
  pCVar4 = param_2;
  while (pCVar4 != pCVar5) {
    pCVar3 = pCVar5;
    while (pCVar3 != (Component *)0x0) {
      pCVar3 = *(Component **)(pCVar3 + 0x30);
      if (pCVar3 == pCVar4) goto LAB_0027cdc9;
    }
    local_50 = uVar7;
    local_48 = pCVar4;
    local_40 = &local_50;
    uVar7 = detail::ComponentHelpers::
            convertToParentSpace<juce::Point<float>>(juce::Component_const&,juce::Point<float>)::
            {lambda()#1}::operator()((_lambda___1_ *)&local_48);
    fVar8 = (float)((ulong)uVar7 >> 0x20);
    pfVar1 = *(float **)(pCVar4 + 0x50);
    if (pfVar1 != (float *)0x0) {
      uVar7 = CONCAT44((float)uVar7 * pfVar1[3] + pfVar1[4] * fVar8 + pfVar1[5],
                       (float)uVar7 * *pfVar1 + pfVar1[1] * fVar8 + pfVar1[2]);
    }
    pCVar4 = *(Component **)(pCVar4 + 0x30);
    if (pCVar4 == (Component *)0x0) goto code_r0x0027cdaa;
  }
LAB_0027cdd4:
  pCVar4 = getComponentAt(uVar7,pCVar5);
  if (pCVar4 == param_2) {
    bVar6 = true;
  }
  else {
    do {
      pCVar5 = pCVar4;
      if (pCVar5 == (Component *)0x0) break;
      pCVar4 = *(Component **)(pCVar5 + 0x30);
    } while (*(Component **)(pCVar5 + 0x30) != param_2);
    bVar6 = pCVar5 != (Component *)0x0;
  }
  return bVar6;
code_r0x0027cdaa:
  pCVar3 = pCVar5;
  do {
    pCVar4 = pCVar3;
    pCVar3 = *(Component **)(pCVar4 + 0x30);
  } while (*(Component **)(pCVar4 + 0x30) != (Component *)0x0);
  uVar7 = detail::ComponentHelpers::convertFromParentSpace<juce::Point<float>>(uVar7,(long *)pCVar4)
  ;
  if (pCVar4 != pCVar5) {
LAB_0027cdc9:
    uVar7 = detail::ComponentHelpers::convertFromDistantParentSpace<juce::Point<float>>
                      (uVar7,(long)pCVar4,(long *)pCVar5);
  }
  goto LAB_0027cdd4;
}



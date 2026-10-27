// Function : from
// Namespace: juce:FTFaceWrapper
// Entry    : 00300f50
// Prototype: undefined from(FTFaceWrapper * this, long * param_1, undefined8 * param_2, int param_3)
// Body     : 00300f50 - 00301000


/* juce::FTFaceWrapper::from(juce::ReferenceCountedObjectPtr<juce::FTLibWrapper> const&, juce::File
   const&, int) */

void __thiscall
juce::FTFaceWrapper::from(FTFaceWrapper *this,long *param_1,undefined8 *param_2,int param_3)

{
  long lVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 local_20;
  
  local_20 = 0;
  iVar2 = FT_New_Face(*(undefined8 *)(*param_1 + 0x18),*param_2,(long)param_3,&local_20);
  if (iVar2 == 0) {
    puVar3 = operator_new(0x30);
    *(undefined4 *)(puVar3 + 1) = 0;
    *puVar3 = &PTR__FTFaceWrapper_007123a8;
    lVar1 = *param_1;
    puVar3[2] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
    }
    puVar3[3] = 0;
    puVar3[4] = 0;
    puVar3[5] = local_20;
    LOCK();
    *(int *)(puVar3 + 1) = *(int *)(puVar3 + 1) + 1;
    UNLOCK();
    lVar1 = puVar3[5];
                    /* try { // try from 00300fd4 to 00300ff3 has its CatchHandler @ 00301001 */
    iVar2 = FT_Select_Charmap(lVar1,0x756e6963);
    if (iVar2 != 0) {
      FT_Set_Charmap(lVar1,**(undefined8 **)(lVar1 + 0x50));
    }
    *(undefined8 **)this = puVar3;
  }
  else {
    *(undefined8 *)this = 0;
  }
  return;
}



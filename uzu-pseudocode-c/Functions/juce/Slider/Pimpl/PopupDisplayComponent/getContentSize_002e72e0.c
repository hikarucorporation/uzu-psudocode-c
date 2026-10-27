// Function : getContentSize
// Namespace: juce:Slider:Pimpl:PopupDisplayComponent
// Entry    : 002e72e0
// Prototype: undefined getContentSize(undefined8 param_1_00, float param_2_00, long param_3, int * param_4, int * param_5, undefined8 param_6, uint * param_7, ulong param_8)
// Body     : 002e72e0 - 002e7372


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention: __cdecl */
/* juce::Slider::Pimpl::PopupDisplayComponent::getContentSize(int&, int&) */

void __cdecl
juce::Slider::Pimpl::PopupDisplayComponent::getContentSize
          (undefined8 param_1_00,float param_2_00,long param_3,int *param_4,int *param_5,
          undefined8 param_6,uint *param_7,ulong param_8)

{
  SharedFontInternal *this;
  undefined8 extraout_RDX;
  float fVar1;
  undefined8 uVar2;
  
  GlyphArrangement::getStringBounds
            ((long *)(param_3 + 0x140),*(byte **)(param_3 + 0x148),param_5,param_6,param_7,param_8);
  fVar1 = ceilf(param_2_00);
  *param_4 = (int)fVar1 + 0x12;
  this = *(SharedFontInternal **)(param_3 + 0x140);
  fVar1 = *(float *)(this + 100);
  if (fVar1 <= 0.0) {
    fVar1 = *(float *)(this + 0x68);
                    /* try { // try from 002e7338 to 002e733f has its CatchHandler @ 002e7373 */
    uVar2 = Font::SharedFontInternal::getAscentDescent
                      (this,(long *)(param_3 + 0x140),extraout_RDX,param_6,param_7,param_8);
    fVar1 = fVar1 * ((float)((ulong)uVar2 >> 0x20) + (float)uVar2);
  }
  *param_5 = (int)(fVar1 * _DAT_005de534);
  return;
}



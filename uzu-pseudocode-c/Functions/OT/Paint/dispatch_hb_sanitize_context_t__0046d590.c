// Function : dispatch<hb_sanitize_context_t>
// Namespace: OT:Paint
// Entry    : 0046d590
// Prototype: ulong dispatch<hb_sanitize_context_t>(Paint * this, long param_1)
// Body     : 0046d590 - 0046d88f


/* hb_sanitize_context_t::return_t
   OT::Paint::dispatch<hb_sanitize_context_t>(hb_sanitize_context_t*) const */

ulong __thiscall OT::Paint::dispatch<hb_sanitize_context_t>(Paint *this,long param_1)

{
  long *plVar1;
  uint *puVar2;
  ulong uVar3;
  Paint *pPVar4;
  
  if ((Paint *)(ulong)*(uint *)(param_1 + 0x18) < this + (1 - *(long *)(param_1 + 8))) {
    return 0;
  }
  if (0x1f < (byte)((char)*this - 1U)) {
    return CONCAT71((int7)((ulong)(this + (1 - *(long *)(param_1 + 8))) >> 8),1);
  }
  plVar1 = (long *)(param_1 + 8);
  puVar2 = (uint *)(param_1 + 0x18);
  switch(*this) {
  case (Paint)0x1:
    pPVar4 = this + (6 - *plVar1);
    goto LAB_0046d6ad;
  case (Paint)0x2:
    pPVar4 = this + (5 - *plVar1);
    goto LAB_0046d6ad;
  case (Paint)0x3:
    return CONCAT71((int7)((ulong)(this + (9 - *plVar1)) >> 8),
                    this + (5 - *plVar1) <= (Paint *)(ulong)*puVar2 &&
                    this + (9 - *plVar1) <= (Paint *)(ulong)*puVar2);
  case (Paint)0x4:
    if (this + (0x10 - *plVar1) <= (Paint *)(ulong)*puVar2) {
      uVar3 = PaintLinearGradient<OT::NoVariable>::sanitize
                        ((PaintLinearGradient<OT::NoVariable> *)this,param_1);
      return uVar3;
    }
    break;
  case (Paint)0x5:
    if (this + (0x14 - *plVar1) <= (Paint *)(ulong)*puVar2) {
      uVar3 = PaintLinearGradient<OT::Variable>::sanitize
                        ((PaintLinearGradient<OT::Variable> *)this,param_1);
      return uVar3;
    }
    break;
  case (Paint)0x6:
    if (this + (0x10 - *plVar1) <= (Paint *)(ulong)*puVar2) {
      uVar3 = PaintRadialGradient<OT::NoVariable>::sanitize
                        ((PaintRadialGradient<OT::NoVariable> *)this,param_1);
      return uVar3;
    }
    break;
  case (Paint)0x7:
    if (this + (0x14 - *plVar1) <= (Paint *)(ulong)*puVar2) {
      uVar3 = PaintRadialGradient<OT::Variable>::sanitize
                        ((PaintRadialGradient<OT::Variable> *)this,param_1);
      return uVar3;
    }
    break;
  case (Paint)0x8:
    if (this + (0xc - *plVar1) <= (Paint *)(ulong)*puVar2) {
      uVar3 = PaintSweepGradient<OT::NoVariable>::sanitize
                        ((PaintSweepGradient<OT::NoVariable> *)this,param_1);
      return uVar3;
    }
    break;
  case (Paint)0x9:
    if (this + (0x10 - *plVar1) <= (Paint *)(ulong)*puVar2) {
      uVar3 = PaintSweepGradient<OT::Variable>::sanitize
                        ((PaintSweepGradient<OT::Variable> *)this,param_1);
      return uVar3;
    }
    break;
  case (Paint)0xa:
    uVar3 = PaintGlyph::sanitize((PaintGlyph *)this,param_1);
    return uVar3;
  case (Paint)0xb:
    pPVar4 = this + (3 - *plVar1);
LAB_0046d6ad:
    return (ulong)CONCAT31((int3)(*puVar2 >> 8),pPVar4 <= (Paint *)(ulong)*puVar2);
  case (Paint)0xc:
    uVar3 = PaintTransform<OT::NoVariable>::sanitize((PaintTransform<OT::NoVariable> *)this,param_1)
    ;
    return uVar3;
  case (Paint)0xd:
    uVar3 = PaintTransform<OT::Variable>::sanitize((PaintTransform<OT::Variable> *)this,param_1);
    return uVar3;
  case (Paint)0xe:
    if (this + (8 - *plVar1) <= (Paint *)(ulong)*puVar2) {
LAB_0046d6ee:
      uVar3 = PaintTranslate::sanitize((PaintTranslate *)this,param_1);
      return uVar3;
    }
    break;
  case (Paint)0xf:
    if (this + (0xc - *plVar1) <= (Paint *)(ulong)*puVar2) goto LAB_0046d6ee;
    break;
  case (Paint)0x10:
    if (this + (8 - *plVar1) <= (Paint *)(ulong)*puVar2) {
LAB_0046d721:
      uVar3 = PaintScale::sanitize((PaintScale *)this,param_1);
      return uVar3;
    }
    break;
  case (Paint)0x11:
    if (this + (0xc - *plVar1) <= (Paint *)(ulong)*puVar2) goto LAB_0046d721;
    break;
  case (Paint)0x12:
    if (this + (0xc - *plVar1) <= (Paint *)(ulong)*puVar2) {
LAB_0046d754:
      uVar3 = PaintScaleAroundCenter::sanitize((PaintScaleAroundCenter *)this,param_1);
      return uVar3;
    }
    break;
  case (Paint)0x13:
    if (this + (0x10 - *plVar1) <= (Paint *)(ulong)*puVar2) goto LAB_0046d754;
    break;
  case (Paint)0x14:
    if (this + (6 - *plVar1) <= (Paint *)(ulong)*puVar2) {
LAB_0046d787:
      uVar3 = PaintScaleUniform::sanitize((PaintScaleUniform *)this,param_1);
      return uVar3;
    }
    break;
  case (Paint)0x15:
    if (this + (10 - *plVar1) <= (Paint *)(ulong)*puVar2) goto LAB_0046d787;
    break;
  case (Paint)0x16:
    if (this + (10 - *plVar1) <= (Paint *)(ulong)*puVar2) {
LAB_0046d7ba:
      uVar3 = PaintScaleUniformAroundCenter::sanitize((PaintScaleUniformAroundCenter *)this,param_1)
      ;
      return uVar3;
    }
    break;
  case (Paint)0x17:
    if (this + (0xe - *plVar1) <= (Paint *)(ulong)*puVar2) goto LAB_0046d7ba;
    break;
  case (Paint)0x18:
    if (this + (6 - *plVar1) <= (Paint *)(ulong)*puVar2) {
LAB_0046d7ed:
      uVar3 = PaintRotate::sanitize((PaintRotate *)this,param_1);
      return uVar3;
    }
    break;
  case (Paint)0x19:
    if (this + (10 - *plVar1) <= (Paint *)(ulong)*puVar2) goto LAB_0046d7ed;
    break;
  case (Paint)0x1a:
    if (this + (10 - *plVar1) <= (Paint *)(ulong)*puVar2) {
LAB_0046d820:
      uVar3 = PaintRotateAroundCenter::sanitize((PaintRotateAroundCenter *)this,param_1);
      return uVar3;
    }
    break;
  case (Paint)0x1b:
    if (this + (0xe - *plVar1) <= (Paint *)(ulong)*puVar2) goto LAB_0046d820;
    break;
  case (Paint)0x1c:
    if (this + (8 - *plVar1) <= (Paint *)(ulong)*puVar2) {
LAB_0046d853:
      uVar3 = PaintSkew::sanitize((PaintSkew *)this,param_1);
      return uVar3;
    }
    break;
  case (Paint)0x1d:
    if (this + (0xc - *plVar1) <= (Paint *)(ulong)*puVar2) goto LAB_0046d853;
    break;
  case (Paint)0x1e:
    if (this + (0xc - *plVar1) <= (Paint *)(ulong)*puVar2) {
LAB_0046d886:
      uVar3 = PaintSkewAroundCenter::sanitize((PaintSkewAroundCenter *)this,param_1);
      return uVar3;
    }
    break;
  case (Paint)0x1f:
    if (this + (0x10 - *plVar1) <= (Paint *)(ulong)*puVar2) goto LAB_0046d886;
    break;
  case (Paint)0x20:
    uVar3 = PaintComposite::sanitize((PaintComposite *)this,param_1);
    return uVar3;
  }
  return 0;
}



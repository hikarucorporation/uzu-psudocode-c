// Function : getPreferredImageTypeForTemporaryImages
// Namespace: juce:LowLevelGraphicsSoftwareRenderer
// Entry    : 003339a0
// Prototype: LowLevelGraphicsSoftwareRenderer * getPreferredImageTypeForTemporaryImages(LowLevelGraphicsSoftwareRenderer * this)
// Body     : 003339a0 - 003339bf


/* juce::LowLevelGraphicsSoftwareRenderer::getPreferredImageTypeForTemporaryImages() const */

LowLevelGraphicsSoftwareRenderer * __thiscall
juce::LowLevelGraphicsSoftwareRenderer::getPreferredImageTypeForTemporaryImages
          (LowLevelGraphicsSoftwareRenderer *this)

{
  undefined8 *puVar1;
  
  puVar1 = operator_new(8);
  *puVar1 = &PTR__ImageType_00711838;
  *(undefined8 **)this = puVar1;
  return this;
}



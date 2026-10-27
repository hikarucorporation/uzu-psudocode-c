// Function : usesFileExtension
// Namespace: juce:JPEGImageFormat
// Entry    : 003566c0
// Prototype: undefined usesFileExtension(undefined8 param_1_00, File * param_2)
// Body     : 003566c0 - 003566ce


/* juce::JPEGImageFormat::usesFileExtension(juce::File const&) */

void __thiscall juce::JPEGImageFormat::usesFileExtension(undefined8 param_1_00,File *param_2)

{
  File::hasFileExtension(param_2,(byte *)"jpeg;jpg");
  return;
}



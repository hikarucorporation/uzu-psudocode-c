// Function : createInputStream
// Namespace: juce:FileInputSource
// Entry    : 004a5f50
// Prototype: FileInputStream * createInputStream(FileInputSource * this)
// Body     : 004a5f50 - 004a5f8e


/* juce::FileInputSource::createInputStream() */

FileInputStream * __thiscall juce::FileInputSource::createInputStream(FileInputSource *this)

{
  FileInputStream *this_00;
  
  this_00 = operator_new(0x28);
                    /* try { // try from 004a5f65 to 004a5f6f has its CatchHandler @ 004a5f8f */
  FileInputStream::FileInputStream(this_00,(long *)(this + 8));
  if (**(char **)(this_00 + 0x20) != '\0') {
    (**(code **)(*(long *)this_00 + 8))(this_00);
    this_00 = (FileInputStream *)0x0;
  }
  return this_00;
}



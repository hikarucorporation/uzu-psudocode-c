// Function : createInputStreamFor
// Namespace: juce:FileInputSource
// Entry    : 004a5fb0
// Prototype: FileInputStream * createInputStreamFor(FileInputSource * this, undefined8 * param_1)
// Body     : 004a5fb0 - 004a6022


/* juce::FileInputSource::createInputStreamFor(juce::String const&) */

FileInputStream * __thiscall
juce::FileInputSource::createInputStreamFor(FileInputSource *this,undefined8 *param_1)

{
  int iVar1;
  long in_RAX;
  FileInputStream *this_00;
  int *piVar2;
  long local_18;
  
  local_18 = in_RAX;
  File::getSiblingFile((File *)&local_18,(undefined8 *)(this + 8),(byte *)*param_1);
                    /* try { // try from 004a5fc6 to 004a5fcf has its CatchHandler @ 004a6030 */
  this_00 = operator_new(0x28);
                    /* try { // try from 004a5fd3 to 004a5fdd has its CatchHandler @ 004a6023 */
  FileInputStream::FileInputStream(this_00,&local_18);
  if (**(char **)(this_00 + 0x20) != '\0') {
    (**(code **)(*(long *)this_00 + 8))(this_00);
    this_00 = (FileInputStream *)0x0;
  }
  piVar2 = (int *)(local_18 + -0x10);
  if (piVar2 != &emptyString) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      operator_delete__(piVar2);
    }
  }
  return this_00;
}



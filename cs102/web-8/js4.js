function toggle()
{
  object = document.getElementById("testme")
  if( object.className == "visible" )
  {
    object.className = "invisible";
  }
  else
  {
    object.className = "visible";
  }
}

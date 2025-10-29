function toggle()
{
  object = document.getElementById("toggler")
  if( object.className == "visible" )
  {
    object.className = "invisible";
  }
  else
  {
    object.className = "visible";
  }
}

$user = $args[0]
if(($user -eq $null) -or ($user -eq "")) {
  Write-Host "Please type your git login after windowsgitinstall.ps1 - i.e.:"
  Write-Host "windowsgitinstall.ps1 mygitloginname"
  exit
}

Set-PSDebug -trace 1
git clone -v https://${user}@github.com/${user}/cs102e2020fall.git
cd cs102e2020fall
git remote add upstream https://${user}@github.com/seancusackcooperunion/cs102e2020fall.git
git config --global core.autocrlf false
Set-PSDebug -trace 0
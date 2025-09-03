#!/usr/bin/perl

my( @eight12, @twelve8, @twelve12 );

while(<>)
{
  next unless /\d/o;
  my @a;
  if( ( @a = (/([-\d]+)/go) ) == 12 )
  {
    die "already have 12x8, found more rows\n" if @twelve8;
    my $i = 0;
    while( ( @a = (/([-\d]+)/go) ) == 12 or ( defined $_ and not /\d/o ) )
    {
      next unless /\d/o;
      $i++;
      push @twelve8, [@a];
      last if $i >= 8;
    }
    continue
    {
      $_ = <>;
    }
    die "12 by 8 has too few rows\n" if $i < 8;
    print "12x8 found\n";
  }
  elsif( ( @a = (/([-\d]+)/go) ) == 8 )
  {
    die "already have 8x12, found more rows\n" if @eight12;
    my $i = 0;
    while( ( @a = (/([-\d]+)/go) ) == 8 or ( defined $_ and not /\d/o ) )
    {
      next unless /\d/o;
      $i++;
      push @eight12, [@a];
      last if $i >= 12;
    }
    continue
    {
      $_ = <>;
    }
    die "8 by 12 has too few rows\n" if $i < 12;
    print "8x12 found\n";
  }
  #elsif( ( @a = (/([-\d]+)/go) ) == 1 )
  #{
  #  die "already have sum\n" if $sum =~ /\d/;
  #  $sum = ( /(?:[^-\d]*([-\d]+)[^-\d]*)/ )[0];
  #  print "sum found\n";
  #}
  else
  {
    die "data found that is not 8x12 or 12x8 or a sum\n";
  }
  last if @eight12 and @twelve8;
  #last if @eight12 and @twelve8 and $sum =~ /\d/;
}
while(<>)
{
  next unless /\d/o;
  my @a;
  if( ( @a = (/([-\d]+)/go) ) == 12 )
  {
    die "already have 12x12, found more rows\n" if @twelve12;
    my $i = 0;
    while( ( @a = (/([-\d]+)/go) ) == 12 or ( defined $_ and not /\d/o ) )
    {
      next unless /\d/o;
      $i++;
      push @twelve12, [@a];
      last if $i >= 12;
    }
    continue
    {
      $_ = <>;
    }
    die "12 by 12 has too few rows\n" if $i < 12;
    print "12x12 found\n";
  }
}

die "no 12x8 found\n"  unless @twelve8;
die "no 8x12 found\n"  unless @eight12;
die "no 12x12 found\n" unless @twelve12;

my @multiply = map { [ 0 x 12 ] } ( 1 .. 12 );
my $check = 0;
for my $i ( 0..10 )
{
  for my $j ( 0..10 )
  {
    #print STDERR $twelve8[$i]->[$j],"*",$eight12[$j]->[$i],"\n";
    #$check += $twelve8[$i]->[$j] * $eight12[$j]->[$i];
    #print STDERR "sum=$check\n";
    for my $k ( 0..8 )
    {
      $multiply[$i][$j] += $twelve8[$k][$i] * $eight12[$j][$k];
    }
  }
}

my $correct = 1;
my $trans   = 1;
for my $i ( 0..10 )
{
  for my $j ( 0..10 )
  {
    my @mark = ( " ", " " );
    if( $multiply[$i][$j] != $twelve12[$i][$j] ) { $correct = 0; }
    if( $multiply[$i][$j] != $twelve12[$j][$i] ) { $trans   = 0; }
    if( $multiply[$i][$j] != $twelve12[$i][$j] and
        $multiply[$i][$j] != $twelve12[$j][$i] ) { @mark = ( "(", ")" ); }
    printf '%s%6d%s ', $mark[0], $multiply[$i][$j], $mark[1];
  }
  print "\n";
}

print "ok\n"            if $correct;
print "ok transposed\n" if $trans;


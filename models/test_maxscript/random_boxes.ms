-- Make Random Boxes

maxItems = 20

makeBox()

fn makeBox =
(
  for i = 1 to maxItems while i <= maxItems do (
    Box lengthsegs:1 widthsegs:1 heightsegs:1       length:(random 0 100) width:(random 0 100) height:(random 0 100)       pos:[(random -100 100),(random -100 100),(random -100 100)]       mapcoords:on isSelected:on

      $.wirecolor = color (random 0 255) (random 0 255) (random 0 255)
  )
)
#!/usr/bin/env ruby

class Character
  attr_writer :hp, :attack

  @@index = 0

  def initialize(hp = 10, attack = 5, defence = 3)
    @id = @@index
    @hp = hp
    @attack = attack
    @defence = defence
    @@index += 1
  end

  def dead?
    @hp <= 0 ? true : false
  end

  def update
    @hp -= 1
  end

  def print_state
    puts "id : #{@id}, hp : #{@hp}"
  end
end

#!/usr/bin/env ruby

require 'singleton'
require_relative 'character'

class Simulator
  include Singleton

  def initialize
    @character_list = []
    @character_list.push(Character.new(20))
    @character_list.push(Character.new)
  end

  def run
    turn = 0
    gameEnd = false
  
    until gameEnd do
      puts "turn #{turn}"
    
      @character_list.each do |character|
        character.update
        character.print_state
        gameEnd = gameEnd || character.dead?
      end

      puts "turn end\n"
    end
  end
end
